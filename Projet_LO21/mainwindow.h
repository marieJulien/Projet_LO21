#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <string>
#include <cctype>
#include <vector>
#include "factoryconst.h"
#include "pile.h"
#include "calcul.h"
#include "expression.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //fonctions de traitement des boutons
    void on_pushButton_0_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_Plus_clicked();
    void on_pushButton_Moins_clicked();
    void on_pushButton_Mul_clicked();
    void on_pushButton_DIV_clicked();
    void on_pushButton_DUP_clicked();
    void on_pushButton_CLEAR_clicked();
    void on_pushButton_DROP_clicked();
    void on_pushButton_EVAL_clicked();
    void on_pushButton_Enter_clicked();
    void on_pushButton_Annuler_clicked();
    //void on_pushButton_Retablir_clicked();
    void on_pushButton_COS_clicked();
    void on_pushButton_COSH_clicked();
    void on_pushButton_SIN_clicked();
    void on_pushButton_SINH_clicked();
    void on_pushButton_TAN_clicked();
    void on_pushButton_TANH_clicked();
    void on_pushButton_MOD_clicked();
    void on_pushButton_FACT_clicked();
    void on_pushButton_POW_clicked();
    void on_pushButton_LN_clicked();
    void on_pushButton_LOG_clicked();
    void on_pushButton_SQRT_clicked();
    void on_pushButton_SQR_clicked();
    void on_pushButton_CUBE_clicked();
    void on_pushButton_INV_clicked();
    void on_pushButton_SIGN_clicked();

    void afficheClavier(); //gère l'affichage du clavier
    void effacer(); //gère le raccourcis avec le bouton backspace
    void changeMode(int m); //gère le changement de mode d'utilisation
    void useComplexe(); //gère l'utilisation de Complexe
    void ecrireComplexe(); //gère l'affichage su symbole représentant les complexes
    void ecrireExpression(); //gère l'affichage des
    void ecrireVirgule(); //gère l'affichage de la virgule
    void ecrireEspace();
    void changeAffichagePile();
    void evaluer(Expression* expr);

private:
    Ui::MainWindow *ui;
    QString* contenuList[20]; //Stocke les QString à afficher dans le ListWidget
    Type typeMode; //permet de savoir quelle Constante on désire
    Type typeComplexe; //Permet de connaitre le type de complexe désiré
    void affichePile(); //Affiche le contenu de la pile
};


bool isEntier(const std::string& s); //permet de déterminer si le contenu de s est un entier
bool isReel(const std::string& s); //permet de déterminer si le contenu de s est un reel
bool isRationnel(const std::string& s); //permet de déterminer si le contenu de s est un rationnel
bool isComplexe(const std::string& s); //permet de déterminer si le contenu de s est un complexe
bool isExpression(const std::string& s); //permet de déterminer si s est une expression
bool operateur(const std::string& s); //permet de déterminer si s est un opérateur
bool estPresentChar(const char& c, const QString& s); //permet de déterminer si un caractère est présent dans s
bool estVide(const QString& s); //permet de déterminer si s est vide
int nbOccurences(const char& c, const QString& s); //permet de connaitre le nombre d'occurence de c dans s
Type typeTexte(const QString& s); //permet de connaitre le type de Constante contenue dans le QString (fait appel aux is_(s)



#endif // MAINWINDOW_H
