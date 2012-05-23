#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>

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
    //void on_pushButton_EVAL_clicked();
    //void on_pushButton_Enter_clicked()
    //void on_pushButton_Annuler_clicked()
    //void on_pushButton_Retablir_clicked()
    void afficheClavier();
    void effacer();
    void changeMode(int m);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
