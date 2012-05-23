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

    //Connection des raccourcis claviers avec les Widgets

    QObject::connect(shortcut0, SIGNAL(activated()), this, SLOT(on_pushButton_13_clicked()));
    QObject::connect(shortcut1, SIGNAL(activated()), this, SLOT(on_pushButton_12_clicked()));
    QObject::connect(shortcut2, SIGNAL(activated()), this, SLOT(on_pushButton_17_clicked()));
    QObject::connect(shortcut3, SIGNAL(activated()), this, SLOT(on_pushButton_18_clicked()));
    QObject::connect(shortcut4, SIGNAL(activated()), this, SLOT(on_pushButton_11_clicked()));
    QObject::connect(shortcut5, SIGNAL(activated()), this, SLOT(on_pushButton_14_clicked()));
    QObject::connect(shortcut6, SIGNAL(activated()), this, SLOT(on_pushButton_15_clicked()));
    QObject::connect(shortcut7, SIGNAL(activated()), this, SLOT(on_pushButton_7_clicked()));
    QObject::connect(shortcut8, SIGNAL(activated()), this, SLOT(on_pushButton_8_clicked()));
    QObject::connect(shortcut9, SIGNAL(activated()), this, SLOT(on_pushButton_9_clicked()));
    QObject::connect(shortcutP, SIGNAL(activated()), this, SLOT(on_pushButton_10_clicked()));
    QObject::connect(shortcutM, SIGNAL(activated()), this, SLOT(on_pushButton_16_clicked()));
    QObject::connect(shortcutF, SIGNAL(activated()), this, SLOT(on_pushButton_19_clicked()));
    QObject::connect(shortcutD, SIGNAL(activated()), this, SLOT(on_pushButton_22_clicked()));
    //QObject::connect(shortcutEval, SIGNAL(activated()), this, SLOT(on_pushButton_40_clicked()));
    //QObject::connect(shortcutEnter, SIGNAL(activated()), this, SLOT(on_pushButton_21_clicked()));
    //QObject::connect(shortcutReturn, SIGNAL(activated()), this, SLOT(on_pushButton_21_clicked()));
    //QObject::connect(shortcutAnnuler, SIGNAL(activated()), this, SLOT(on_pushButton_20_clicked()));
    //QObject::connect(shortcutRetablir, SIGNAL(activated()), this, SLOT(on_pushButton_23_clicked()));

    //Connection des widgets avec les Slots persos

    QObject::connect(ui->actionClavier, SIGNAL(triggered()), this, SLOT(afficheClavier()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Définition des slots des raccourcis claviers

void MainWindow::on_pushButton_13_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "0";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_12_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "1";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_17_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "2";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_18_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "3";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_11_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "4";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_14_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "5";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_15_clicked()
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
void MainWindow::on_pushButton_10_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "+";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_16_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "-";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_19_clicked()
{
    QString texte = ui->textEdit->toPlainText() + "*";
    ui->textEdit->clear();
    ui->textEdit->setText(texte);
}
void MainWindow::on_pushButton_22_clicked()
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
        ui->pushButton_7->setVisible(true);
        ui->pushButton_8->setVisible(true);
        ui->pushButton_9->setVisible(true);
        ui->pushButton_10->setVisible(true);
        ui->pushButton_11->setVisible(true);
        ui->pushButton_12->setVisible(true);
        ui->pushButton_13->setVisible(true);
        ui->pushButton_14->setVisible(true);
        ui->pushButton_15->setVisible(true);
        ui->pushButton_16->setVisible(true);
        ui->pushButton_17->setVisible(true);
        ui->pushButton_18->setVisible(true);
        ui->pushButton_19->setVisible(true);
        ui->pushButton_21->setVisible(true);
        ui->pushButton_22->setVisible(true);
        ui->pushButton_40->setVisible(true);
    }
    else
    {
        ui->pushButton_7->setVisible(false);
        ui->pushButton_8->setVisible(false);
        ui->pushButton_9->setVisible(false);
        ui->pushButton_10->setVisible(false);
        ui->pushButton_11->setVisible(false);
        ui->pushButton_12->setVisible(false);
        ui->pushButton_13->setVisible(false);
        ui->pushButton_14->setVisible(false);
        ui->pushButton_15->setVisible(false);
        ui->pushButton_16->setVisible(false);
        ui->pushButton_17->setVisible(false);
        ui->pushButton_18->setVisible(false);
        ui->pushButton_19->setVisible(false);
        ui->pushButton_21->setVisible(false);
        ui->pushButton_22->setVisible(false);
        ui->pushButton_40->setVisible(false);
    }
}
