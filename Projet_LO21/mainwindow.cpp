#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(600, 334);

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
    //QShortcut* shortcutEnter = new QShortcut(QKeySequence(Qt::Key_Enter), this);
    //QShortcut* shortcutReturn = new QShortcut(QKeySequence(Qt::Key_Return), this);
    //QShortcut* shortcutAnnuler = new QShortcut(QKeySequence("Ctrl+z"), this);
    //QShortcut* shortcutRetablir = new QShortcut(QKeySequence("Ctrl+y"), this);
    QShortcut* shortcutEffacer = new QShortcut(QKeySequence("Backspace"), this);

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
    //QObject::connect(shortcutEnter, SIGNAL(activated()), this, SLOT(on_pushButton_Enter_clicked()));
    //QObject::connect(shortcutReturn, SIGNAL(activated()), this, SLOT(on_pushButton_Enter_clicked()));
    //QObject::connect(shortcutAnnuler, SIGNAL(activated()), this, SLOT(on_pushButton_Annuler_clicked()));
    //QObject::connect(shortcutRetablir, SIGNAL(activated()), this, SLOT(on_pushButton_Retablir_clicked()));
    QObject::connect(shortcutEffacer, SIGNAL(activated()), this, SLOT(effacer()));

    //Connection des widgets avec les Slots modifiant l'affichage

    QObject::connect(ui->actionClavier, SIGNAL(triggered()), this, SLOT(afficheClavier()));
    QObject::connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(changeMode(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
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
    QString texte = ui->textEdit->toPlainText() + "+";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_Moins_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "-";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_Mul_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "*";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_DIV_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "/";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
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
}
