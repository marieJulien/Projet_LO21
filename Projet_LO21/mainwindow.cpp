#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

//Création de la Pile

Pile& P = Pile::donneInstance();

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(600, 334);

    for(int i = 0; i < 20; i++)
        contenuList[i] = NULL;

    typeMode = entier;
    typeComplexe = entier;

    //Définition des raccourcis clavier

    QShortcut* shortcut0 = new QShortcut(QKeySequence("0"), this);
    QShortcut* shortcut1 = new QShortcut(QKeySequence("1"), this);
    QShortcut* shortcut2 = new QShortcut(QKeySequence("2"), this);
    QShortcut* shortcut3 = new QShortcut(QKeySequence("3"), this);
    QShortcut* shortcut4 = new QShortcut(QKeySequence("4"), this);
    QShortcut* shortcut5 = new QShortcut(QKeySequence("5"), this);
    QShortcut* shortcut6 = new QShortcut(QKeySequence("6"), this);
    QShortcut* shortcut7 = new QShortcut(QKeySequence("7"), this);
    QShortcut* shortcut8 = new QShortcut(QKeySequence("8"), this);
    QShortcut* shortcut9 = new QShortcut(QKeySequence("9"), this);
    QShortcut* shortcutP = new QShortcut(QKeySequence("+"), this);
    QShortcut* shortcutM = new QShortcut(QKeySequence("-"), this);
    QShortcut* shortcutF = new QShortcut(QKeySequence("*"), this);
    QShortcut* shortcutD = new QShortcut(QKeySequence("/"), this);
    //QShortcut* shortcutEval = new QShortcut(QKeySequence("Ctrl+e"), this);
    QShortcut* shortcutEnter = new QShortcut(QKeySequence(Qt::Key_Enter), this);
    QShortcut* shortcutReturn = new QShortcut(QKeySequence(Qt::Key_Return), this);
    QShortcut* shortcutAnnuler = new QShortcut(QKeySequence("Ctrl+z"), this);
    //QShortcut* shortcutRetablir = new QShortcut(QKeySequence("Ctrl+y"), this);
    QShortcut* shortcutEffacer = new QShortcut(QKeySequence("Backspace"), this);
    QShortcut* shortcut$ = new QShortcut(QKeySequence("$"), this);
    QShortcut* shortcutExpr = new QShortcut(QKeySequence("'"), this);
    QShortcut* shortcutVirgule = new QShortcut(QKeySequence(","), this);
    QShortcut* shortcutClear = new QShortcut(QKeySequence("Ctrl+c"), this);
    QShortcut* shortcutEspace = new QShortcut(QKeySequence("Space"), this);

    //Connection des raccourcis claviers avec les Widgets

    QObject::connect(shortcut0, SIGNAL(activated()), this, SLOT(on_pushButton_0_clicked()));
    QObject::connect(shortcut1, SIGNAL(activated()), this, SLOT(on_pushButton_1_clicked()));
    QObject::connect(shortcut2, SIGNAL(activated()), this, SLOT(on_pushButton_2_clicked()));
    QObject::connect(shortcut3, SIGNAL(activated()), this, SLOT(on_pushButton_3_clicked()));
    QObject::connect(shortcut4, SIGNAL(activated()), this, SLOT(on_pushButton_4_clicked()));
    QObject::connect(shortcut5, SIGNAL(activated()), this, SLOT(on_pushButton_5_clicked()));
    QObject::connect(shortcut6, SIGNAL(activated()), this, SLOT(on_pushButton_6_clicked()));
    QObject::connect(shortcut7, SIGNAL(activated()), this, SLOT(on_pushButton_7_clicked()));
    QObject::connect(shortcut8, SIGNAL(activated()), this, SLOT(on_pushButton_8_clicked()));
    QObject::connect(shortcut9, SIGNAL(activated()), this, SLOT(on_pushButton_9_clicked()));
    QObject::connect(shortcutP, SIGNAL(activated()), this, SLOT(on_pushButton_Plus_clicked()));
    QObject::connect(shortcutM, SIGNAL(activated()), this, SLOT(on_pushButton_Moins_clicked()));
    QObject::connect(shortcutF, SIGNAL(activated()), this, SLOT(on_pushButton_Mul_clicked()));
    QObject::connect(shortcutD, SIGNAL(activated()), this, SLOT(on_pushButton_DIV_clicked()));
    //QObject::connect(shortcutEval, SIGNAL(activated()), this, SLOT(on_pushButton_EVAL_clicked()));
    QObject::connect(shortcutEnter, SIGNAL(activated()), this, SLOT(on_pushButton_Enter_clicked()));
    QObject::connect(shortcutReturn, SIGNAL(activated()), this, SLOT(on_pushButton_Enter_clicked()));
    QObject::connect(shortcutAnnuler, SIGNAL(activated()), this, SLOT(on_pushButton_Annuler_clicked()));
    //QObject::connect(shortcutRetablir, SIGNAL(activated()), this, SLOT(on_pushButton_Retablir_clicked()));
    QObject::connect(shortcutEffacer, SIGNAL(activated()), this, SLOT(effacer()));
    QObject::connect(shortcut$, SIGNAL(activated()), this, SLOT(ecrireComplexe()));
    QObject::connect(shortcutExpr, SIGNAL(activated()), this, SLOT(ecrireExpression()));
    QObject::connect(shortcutVirgule, SIGNAL(activated()), this, SLOT(ecrireVirgule()));
    QObject::connect(shortcutClear, SIGNAL(activated()), this, SLOT(on_pushButton_CLEAR_clicked()));
    QObject::connect(shortcutEspace, SIGNAL(activated()), this, SLOT(ecrireEspace()));

    //Connection des widgets avec les Slots modifiant l'affichage

    QObject::connect(ui->actionClavier, SIGNAL(triggered()), this, SLOT(afficheClavier()));
    QObject::connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(changeMode(int)));
    QObject::connect(ui->checkBox, SIGNAL(clicked()), this, SLOT(useComplexe()));
    QObject::connect(ui->spinBox, SIGNAL(valueChanged(int)), this, SLOT(changeAffichagePile()));

    //Connections des boutons agissant sur la pile
}

MainWindow::~MainWindow()
{
    for(int i = 0; i < 20; i++)
        delete contenuList[i];
    delete ui;
}

//fonctions outil

bool estPresentChar(const char& c, const QString& s)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == c) return true;
    }

    return false;
}
bool estVide(const QString& s)
{
    if(s == "") return true;
    else return false;
}
int nbOccurences(const char& c, const QString& s)
{
    int i = 0;

    for(int j = 0; j < s.length(); j++)
    {
        if(c == s[j])
            i++;
    }

    return i;

}

bool isExpression(const std::string& s)
{
    if ((s[0]==39) && (s[s.length()-1]==39))
        return true;
    else return false;
}

bool operateur_binaire(const string& s)
{
    return ((s=="+") || (s=="-") || (s=="*") || (s=="/") || (s=="pow") || (s=="mod"));
}

bool operateur_unaire(const std::string &s)
{
    return ((s == "cos") || (s=="sin") || (s=="tan") || (s=="cosh") || (s=="sinh") || (s=="tanh") || (s=="sqr") ||
            (s=="sqrt") || (s=="inv") || (s=="sign") || (s=="cube") || (s=="ln") || (s=="log") || (s=="factn")) ;
}


bool isEntier(const string& s)
{
    for(unsigned int i = 0; i < s.length(); i++)
    {
        if(!isdigit(s[i]))
            return false;
    }
    return true;
}

bool isReel(const string& s)
{
    int j = 0;
    for(unsigned int i =0; i < s.length(); i++)
    {
        if(s[i] == ',') j++;

        if(!isdigit(s[i]) && (s[i] != ',' || j > 1) && isdigit(s[i+1]))
            return false;
    }
    if(j == 1)
        return true;
    else
        return false;
}

bool isRationnel(const string& s)
{
    int j = 0;
    for(unsigned int i =0; i < s.length(); i++)
    {
        if(s[i] == '/') j++;

        if(!isdigit(s[i]) && ((s[i] != '/' || j > 1) || !isdigit(s[i+1])))
            return false;
    }
    if(j == 1)
        return true;
    else
        return false;
}


bool isComplexe(const string& s)
{
    int i = s.find_first_of('$');
    int j = s.find_last_of('$');

    if(i != j)
        return false;

    string s1 = s.substr(0, i);
    string s2 = s.substr(i+1);

    if(s1.length() <= 0 || s2.length() <=0)
        return false;

    if(isEntier(s1) && isEntier(s2))
        return true;
    else if(isReel(s1) && isReel(s2))
        return true;
    else if(isRationnel(s1) && isRationnel(s2))
        return true;

    return false;
}

Type typeTexte(const QString& s)
{
    string s1 = s.toStdString();
    if (isExpression(s1))
        return expression;
    else if(isEntier(s1))
        return entier;
    else if(isReel(s1))
        return reel;
    else if(isRationnel(s1))
        return rationnel;
    else if(isComplexe(s1))
        return complexe;

        return erreur;
}

//Définition des slots des raccourcis claviers

void MainWindow::on_pushButton_0_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "0";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_1_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "1";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_2_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "2";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_3_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "3";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_4_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "4";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_5_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "5";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_6_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "6";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_7_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "7";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_8_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "8";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_9_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "9";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_Plus_clicked()
{
    if(estPresentChar('\'', ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "+";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 2)
    {
           P.ajouterPile(addition(typeMode, typeComplexe, P.extrairePile(), P.extrairePile()));
           affichePile();
    }
}
void MainWindow::on_pushButton_Moins_clicked()
{
    if(estPresentChar('\'', ui->textEdit->toPlainText()) && !estVide(ui->textEdit->toPlainText()))
    {
    QString texte = ui->textEdit->toPlainText() + "-";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 2)
    {
           P.ajouterPile(soustraction(typeMode, typeComplexe, P.extrairePile(), P.extrairePile()));
           affichePile();
    }
}
void MainWindow::on_pushButton_Mul_clicked()
{
    if(estPresentChar('\'', ui->textEdit->toPlainText()) && !estVide(ui->textEdit->toPlainText()))
    {
    QString texte = ui->textEdit->toPlainText() + "*";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 2)
    {
           P.ajouterPile(multiplication(typeMode, typeComplexe, P.extrairePile(), P.extrairePile()));
           affichePile();
    }
}
void MainWindow::on_pushButton_DIV_clicked()
{
    if((!estPresentChar('/', ui->textEdit->toPlainText()) || estPresentChar('\'', ui->textEdit->toPlainText()) || nbOccurences('/', ui->textEdit->toPlainText()) < 2) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "/";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 2)
    {
           P.ajouterPile(division(typeMode, typeComplexe, P.extrairePile(), P.extrairePile()));
           affichePile();
    }
}
void MainWindow::on_pushButton_COS_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "cos";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1)
    {
           P.ajouterPile(cosinus(P.extrairePile(), ui->radioButton->isChecked()));
           affichePile();
    }
}
void MainWindow::on_pushButton_COSH_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "cosh";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1)
    {
           P.ajouterPile(cosinush(P.extrairePile()));
           affichePile();
    }
}
void MainWindow::on_pushButton_SIN_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "sin";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1)
    {
           P.ajouterPile(sinus(P.extrairePile(), ui->radioButton->isChecked()));
           affichePile();
    }
}
void MainWindow::on_pushButton_SINH_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "sinh";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1)
    {
           P.ajouterPile(sinush(P.extrairePile()));
           affichePile();
    }
}
void MainWindow::on_pushButton_TAN_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "tan";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1)
    {
           P.ajouterPile(tangente(P.extrairePile(), ui->radioButton->isChecked()));
           affichePile();
    }
}
void MainWindow::on_pushButton_TANH_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "tanh";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1)
    {
           P.ajouterPile(tangenteh(P.extrairePile()));
           affichePile();
    }
}
void MainWindow::on_pushButton_MOD_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "mod";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 2)
    {
           P.ajouterPile(modulo(P.extrairePile(), P.extrairePile()));
           affichePile();
    }
}
void MainWindow::on_pushButton_FACT_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "fact";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1)
    {
           P.ajouterPile(factorielle(P.extrairePile()));
           affichePile();
    }
}
void MainWindow::on_pushButton_POW_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "pow";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 2 && typeMode != complexe)
    {
           P.ajouterPile(puissance(P.extrairePile(), P.extrairePile(), typeMode));
           affichePile();
    }
}
void MainWindow::on_pushButton_LN_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "ln";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1 && typeMode != complexe)
    {
           P.ajouterPile(logarithmeN(P.extrairePile(), typeMode));
           affichePile();
    }
}
void MainWindow::on_pushButton_LOG_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "log";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1 && typeMode != complexe)
    {
           P.ajouterPile(logarithme(P.extrairePile(), typeMode));
           affichePile();
    }
}
void MainWindow::on_pushButton_SQRT_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "sqrt";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1 && typeMode != complexe)
    {
           P.ajouterPile(racine(P.extrairePile(), typeMode));
           affichePile();
    }
}
void MainWindow::on_pushButton_SQR_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "sqr";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1)
    {
           P.ajouterPile(carre(P.extrairePile(), typeMode, typeComplexe));
           affichePile();
    }
}
void MainWindow::on_pushButton_CUBE_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "cube";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1)
    {
           P.ajouterPile(cube(P.extrairePile(), typeMode, typeComplexe));
           affichePile();
    }
}
void MainWindow::on_pushButton_INV_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "inv";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1 && typeMode != complexe)
    {
           P.ajouterPile(inverse(P.extrairePile(), typeMode));
           affichePile();
    }
}
void MainWindow::on_pushButton_SIGN_clicked()
{
    if ((estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "sign";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
    else if(estVide(ui->textEdit->toPlainText()) && P.getTaille() >= 1)
    {
           P.ajouterPile(signe(P.extrairePile(), typeMode, typeComplexe));
           affichePile();
    }
}
void MainWindow::on_pushButton_DUP_clicked()
{
    if(!P.estVide()){
    P.dupliquer();
    affichePile();}
}
void MainWindow::on_pushButton_CLEAR_clicked()
{
    P.viderPile();
    affichePile();
}
void MainWindow::on_pushButton_DROP_clicked()
{
    if(!P.estVide()){
    P.extrairePile();
    affichePile();}
}
void MainWindow::on_pushButton_Annuler_clicked()
{
    if(estVide(ui->textEdit->toPlainText())){
    P.extrairePile();
    affichePile();
    }
}
void MainWindow::on_pushButton_Enter_clicked()
{
    if(!estVide(ui->textEdit->toPlainText()))
    {
        Type temp = typeTexte(ui->textEdit->toPlainText());

        if (temp==expression)
        {
            P.ajouterPile(FactoryConst::creerConstante(ui->textEdit->toPlainText().toStdString(),temp));
            ui->textEdit->clear();
         }
        else if(typeMode != complexe && temp != erreur)
        {
            if(temp == complexe)
                P.ajouterPile(FactoryConst::creerConstante(ui->textEdit->toPlainText().toStdString(), typeMode, temp, typeComplexe));
            else
                P.ajouterPile(FactoryConst::creerConstante(ui->textEdit->toPlainText().toStdString(), typeMode, temp));
            ui->textEdit->clear();
        }
        else if(temp == complexe)
        {
            int i = ui->textEdit->toPlainText().toStdString().find_first_of('$');
            string a = ui->textEdit->toPlainText().toStdString().substr(0, i);
            Type temp2 = typeTexte(QString(a.c_str()));
            P.ajouterPile(FactoryConst::creerConstante(ui->textEdit->toPlainText().toStdString(), typeMode, temp, typeComplexe, temp2));
            ui->textEdit->clear();
        }
        else if(temp == erreur)
        {
            ui->textEdit->setText("Expression non valide...");
        }
    }
    else if(!P.estVide())
        P.dupliquer();

    affichePile();
}


void MainWindow::on_pushButton_EVAL_clicked()
{
    /*Quand on clique sur EVAL, si la zone de texte contient une expression,
    on l'évalue. Sinon, si la zone de texte contient une constante, on ne fait rien.
    Sinon, si la zone de texte est vide mais que le sommet de la pile est une expression,
    on dépile cette expression pour l'évaluer.*/

    if (!estVide(ui->textEdit->toPlainText()))
    {
        if (typeTexte(ui->textEdit->toPlainText())== expression)
        {
            //on appelle la fonction qui évalue cette expression :
            Expression* temp = new Expression(ui->textEdit->toPlainText().toStdString());
            ui->textEdit->clear();
            evaluer(temp);
        }
    }
    else
    {
        if (!P.estVide())
        {
            if (P.sommetPile()->getType()==expression)
            {

                Constante* a = P.extrairePile();

                Expression* temp2 = dynamic_cast<Expression*>(a);
                evaluer(temp2);
            }
            else
            {
                ui->textEdit->setText(QString::fromStdString(P.extrairePile()->getChaine()));
            }
        }
    }

    affichePile();
}

//Définition des Slots Perso

void MainWindow::afficheClavier()
{
    if(ui->actionClavier->isChecked())
    {
        ui->pushButton_0->setVisible(true);
        ui->pushButton_1->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton_4->setVisible(true);
        ui->pushButton_5->setVisible(true);
        ui->pushButton_6->setVisible(true);
        ui->pushButton_7->setVisible(true);
        ui->pushButton_8->setVisible(true);
        ui->pushButton_9->setVisible(true);
        ui->pushButton_Enter->setVisible(true);
        ui->pushButton_EVAL->setVisible(true);
        ui->pushButton_Plus->setVisible(true);
        ui->pushButton_Moins->setVisible(true);
        ui->pushButton_Mul->setVisible(true);
        ui->pushButton_DIV->setVisible(true);
    }
    else
    {
        ui->pushButton_0->setVisible(false);
        ui->pushButton_1->setVisible(false);
        ui->pushButton_2->setVisible(false);
        ui->pushButton_3->setVisible(false);
        ui->pushButton_4->setVisible(false);
        ui->pushButton_5->setVisible(false);
        ui->pushButton_6->setVisible(false);
        ui->pushButton_7->setVisible(false);
        ui->pushButton_8->setVisible(false);
        ui->pushButton_9->setVisible(false);
        ui->pushButton_Enter->setVisible(false);
        ui->pushButton_EVAL->setVisible(false);
        ui->pushButton_Plus->setVisible(false);
        ui->pushButton_Moins->setVisible(false);
        ui->pushButton_Mul->setVisible(false);
        ui->pushButton_DIV->setVisible(false);
    }
}
void MainWindow::effacer()
{
    QString tmp = ui->textEdit->toPlainText();
    int i = tmp.length();
    ui->textEdit->setPlainText(tmp.left(i-1));
}
void MainWindow::changeMode(int m)
{
    if(m != 0){
        ui->pushButton_MOD->setDisabled(true);
        ui->pushButton_FACT->setDisabled(true);
    }
    else if(!ui->checkBox->isChecked()){
        ui->pushButton_MOD->setDisabled(false);
        ui->pushButton_FACT->setDisabled(false);
    }

    if(m == 0 && ui->checkBox->isChecked())
        typeComplexe = entier;
    else if(m == 1 && ui->checkBox->isChecked())
        typeComplexe = rationnel;
    else if(m == 2 && ui->checkBox->isChecked())
        typeComplexe = reel;
    else if(m == 0 && !ui->checkBox->isChecked())
        typeMode = entier;
    else if(m == 1 && !ui->checkBox->isChecked())
        typeMode = rationnel;
    else if(m == 2 && !ui->checkBox->isChecked())
        typeMode = reel;

}
void MainWindow::useComplexe()
{
    bool temp = ui->checkBox->isChecked();

    ui->pushButton_DIV->setDisabled(temp);
    ui->pushButton_POW->setDisabled(temp);
    ui->pushButton_COS->setDisabled(temp);
    ui->pushButton_COSH->setDisabled(temp);
    ui->pushButton_LN->setDisabled(temp);
    ui->pushButton_LOG->setDisabled(temp);
    ui->pushButton_SIN->setDisabled(temp);
    ui->pushButton_SINH->setDisabled(temp);
    ui->pushButton_INV->setDisabled(temp);
    ui->pushButton_TAN->setDisabled(temp);
    ui->pushButton_TANH->setDisabled(temp);
    ui->pushButton_SQRT->setDisabled(temp);

    if(ui->comboBox->currentIndex() != 0 && temp != true)
    {
        ui->pushButton_MOD->setDisabled(true);
        ui->pushButton_FACT->setDisabled(true);
    }
    else
    {
        ui->pushButton_MOD->setDisabled(temp);
        ui->pushButton_FACT->setDisabled(temp);
    }

    if(temp == true){
        typeMode = complexe;

        if(ui->comboBox->currentIndex() == 0)
            typeComplexe = entier;
        else if(ui->comboBox->currentIndex() == 1)
            typeComplexe = rationnel;
        else if(ui->comboBox->currentIndex() == 2)
            typeComplexe = reel;
    }
    else{
        if(ui->comboBox->currentIndex() == 0)
            typeMode = entier;
        else if(ui->comboBox->currentIndex() == 1)
            typeMode = rationnel;
        else if(ui->comboBox->currentIndex() == 2)
            typeMode = reel;
    }
}
void MainWindow::ecrireComplexe()
{
    if(ui->checkBox->isChecked() && ((!estPresentChar('$', ui->textEdit->toPlainText())) || estPresentChar('\'', ui->textEdit->toPlainText())) && !estVide(ui->textEdit->toPlainText()))
    {
        QString texte = ui->textEdit->toPlainText() + "$";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
}
void MainWindow::ecrireExpression()
{
    if(nbOccurences('\'', ui->textEdit->toPlainText()) < 2){
        QString texte = ui->textEdit->toPlainText() + "'";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
}
void MainWindow::ecrireVirgule()
{
    if((!estPresentChar(',', ui->textEdit->toPlainText()) || estPresentChar('$', ui->textEdit->toPlainText())) && nbOccurences(',', ui->textEdit->toPlainText()) < 2)
    {
        QString texte = ui->textEdit->toPlainText() + ",";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
}
void MainWindow::ecrireEspace()
{
    if((estPresentChar('\'', ui->textEdit->toPlainText())))
    {
        QString texte = ui->textEdit->toPlainText() + " ";
        ui->textEdit->clear();
        ui->textEdit->setText(texte);
    }
}
void MainWindow::changeAffichagePile()
{
        affichePile();
}
void MainWindow::affichePile()
{
    if(!P.estVide())
    {
        int j = 0;
        vector<Constante*> temp;
        while(!P.estVide())
        {
            if(j < 20)
                contenuList[j] = new QString(P.sommetPile()->getChaine().c_str());
            j++;
            temp.push_back(P.extrairePile());
        }

        while(!temp.empty())
        {
            P.ajouterPile(temp.back());
            temp.pop_back();
        }

        ui->listWidget->clear();

        for(int i = 0; contenuList[i] != NULL && i < P.getTaille(); i++)
        {
            if(i >= P.getTaille() - ui->spinBox->value())
                ui->listWidget->insertItem(i, *(contenuList[P.getTaille()-i-1]));
        }

    }
    else
        ui->listWidget->clear();
}

/******************************************** EVALUATION D'UNE EXPRESSION *************************************************************************************/

void MainWindow::evaluer(Expression* expr)
{
    std::string s;
    std::string chaine = expr->getExpr();
    chaine.erase(0,1); //on supprime le premier caractère de la chaîne
    chaine.erase(chaine.length(),1); // on supprime le dernier caractère

    while(chaine[0]!=39)
        //tant qu'on est pas arrivés au bout de l'expression
    {




        if (chaine[0]!=32)
        {
            /*Si le caractère est un opérateur, on doit dépiler deux constantes
            Sinon, on empile la constante*/

            s.push_back(chaine[0]);
            if ((chaine[1]==39) || (chaine[1]==32))
                /* si le caractère suivant est un espace ou une apostrophe
                Alors s contient un nombre/opérateur complet*/
            {

                if (operateur_binaire(s))
                {
                    if (P.getTaille() < 2)
                    {
                        ui->textEdit->setText(QString::fromStdString("'" + chaine));

                    }
                    else
                    {
                        Constante* temp1 = P.extrairePile();
                        Constante* temp2 = P.extrairePile();

                        if (s=="+")
                            P.ajouterPile(addition(typeMode, typeComplexe, temp1, temp2));

                        else if (s=="-")
                             P.ajouterPile(soustraction(typeMode, typeComplexe, temp1, temp2));

                        else if (s=="*")
                             P.ajouterPile(multiplication(typeMode, typeComplexe, temp1, temp2));

                        else if (s=="/")
                             P.ajouterPile(division(typeMode, typeComplexe, temp1, temp2));

                        else if (s=="mod")
                             P.ajouterPile(modulo(temp1,temp2));

                        else if (s=="pow")
                            P.ajouterPile(puissance(temp1,temp2,typeMode));


                    }
                } //fin du if(operateur_binaire(s))


                else if (operateur_unaire(s))
                {
                    /* Si s est un opérateur unaire, on a besoin de dépiler une seule constante */
                    if (P.getTaille() < 1)
                    {
                        ui->textEdit->setText(QString::fromStdString("'" + chaine));

                    }
                    else
                    {
                        Constante* temp1 = P.extrairePile();

                        if (s=="cos")
                            P.ajouterPile(cosinus(temp1,ui->radioButton->isChecked()));

                        else if (s=="sin")
                            P.ajouterPile(sinus(temp1,ui->radioButton->isChecked()));

                        else if (s=="tan")
                            P.ajouterPile(tangente(temp1,ui->radioButton->isChecked()));

                        else if (s=="cosh")
                            P.ajouterPile(cosinush(temp1));

                        else if (s=="sinh")
                            P.ajouterPile(sinush(temp1));

                        else if (s=="tanh")
                            P.ajouterPile(tangenteh(temp1));

                        else if (s=="ln")
                            P.ajouterPile(logarithmeN(temp1,typeMode));

                        else if (s=="log")
                            P.ajouterPile(logarithme(temp1,typeMode));

                        else if (s=="sqr")
                            P.ajouterPile(carre(temp1,typeMode,typeComplexe));

                        else if (s=="sqrt")
                            P.ajouterPile(racine(temp1,typeMode));

                        else if (s=="cube")
                            P.ajouterPile(cube(temp1,typeMode,typeComplexe));

                        else if (s=="fact")
                            P.ajouterPile(factorielle(convertirEntier(temp1)));

                        else if (s=="sign")
                            P.ajouterPile(signe(temp1,typeMode,typeComplexe));

                        else if (s=="inv")
                            P.ajouterPile(inverse(temp1,typeMode));


                    }
                } //fin if opérateur unaire


                else
                {
                    /*Si s est une constante, on l'empile*/
                    Type temp = typeTexte(QString::fromStdString(s));

                    if(typeMode != complexe && temp != erreur)
                    {
                        if(temp == complexe)
                            P.ajouterPile(FactoryConst::creerConstante(s, typeMode, temp, typeComplexe));
                        else
                            P.ajouterPile(FactoryConst::creerConstante(s, typeMode, temp));

                    }
                    else if(temp == complexe)
                    {
                        int j = s.find_first_of('$');
                        string a = s.substr(0, j);
                        Type temp2 = typeTexte(QString(a.c_str()));
                        P.ajouterPile(FactoryConst::creerConstante(s, typeMode, temp, typeComplexe, temp2));

                    }
                    else if(temp == erreur)
                    {
                        ui->textEdit->setText("Expression non valide...");
                    }
                }
                s.clear(); //on vide s pour commencer un nouveau nombre/opérateur
            } //fin du if : caractère suivant = espace ou apostrophe
        } //fin du if : le caractère n'est pas un espace

        chaine.erase(0,1); //on élimine un nouveau caractère de la chaine

    } //fin du while
}


