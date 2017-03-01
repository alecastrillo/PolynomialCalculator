#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "iostream"
#include "polinomio.h"
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:

    Polinomio pol;
    string poliEntered = "";
    string poli1 = "";
    string poli2 = "";
    string operador = "";
    bool poli_1=true;
    explicit MainWindow(QWidget *parent = 0);
    
    ~MainWindow();

private slots:
    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button0_clicked();

    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_buttonVar_clicked();

    void on_buttonPlus_clicked();

    void on_buttonMinus_clicked();

    void on_buttonMult_clicked();

    void on_buttone_clicked();

    void on_buttonD_clicked();

    void on_buttonC_clicked();

    void on_buttonEqual_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
