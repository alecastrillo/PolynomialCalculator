#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"
#include "QDebug"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button7_clicked()
{
    if(poli_1){
        poli1.append("7");
        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);
    }else{
        poli2.append("7");

        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);

    }
}

void MainWindow::on_button8_clicked()
{

    if(poli_1){
        poli1.append("8");
        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);
    }else{
        poli2.append("8");

        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);

    }
}

void MainWindow::on_button9_clicked()
{
    if(poli_1){
        poli1.append("9");
        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);
    }else{
        poli2.append("9");

        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);

    }
}

void MainWindow::on_button4_clicked()
{
    if(poli_1){
        poli1.append("4");
        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);
    }else{
        poli2.append("4");

        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);

    }
}

void MainWindow::on_button5_clicked()
{
    if(poli_1){
        poli1.append("5");
        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);
    }else{
        poli2.append("5");

        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);

    }
}

void MainWindow::on_button6_clicked()
{
    if(poli_1){
        poli1.append("6");
        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);
    }else{
        poli2.append("6");

        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);

    }
}

void MainWindow::on_button0_clicked()
{
    if(poli_1){
        poli1.append("0");
        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);
    }else{
        poli2.append("0");

        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);

    }
}

void MainWindow::on_button1_clicked()
{
    if(poli_1){
        poli1.append("1");
        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);
    }else{
        poli2.append("1");

        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);

    }
}

void MainWindow::on_button2_clicked()
{
    if(poli_1){
        poli1.append("2");

        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);
    }else{
        poli2.append("2");

        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);

    }
}

void MainWindow::on_button3_clicked()
{
    if(poli_1){
        poli1.append("3");
        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);
    }else{
        poli2.append("3");

        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);

    }
}

void MainWindow::on_buttonVar_clicked()
{
    if(poli_1){
        poli1.append("|");
        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);
    }else{
        poli2.append("|");

        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);

    }

}

void MainWindow::on_buttonPlus_clicked()
{
    this->operador = "suma";
    ui->textBrowser->clear();
    ui->textBrowser->append(QString::fromStdString(poli1));
    ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
    QTextCursor cursor = ui->textBrowser->textCursor();
    QTextBlockFormat textBlockFormat = cursor.blockFormat();
    textBlockFormat.setAlignment(Qt::AlignRight);
    cursor.mergeBlockFormat(textBlockFormat);
    ui->textBrowser->setTextCursor(cursor);

    poli_1=false;
}

void MainWindow::on_buttonMinus_clicked()
{
    this->operador = "resta";
    int final = poliEntered.length()-1;
    if(poliEntered.at(final)=='|'){
        if(poli_1){
            poli1.append("-");
            ui->textBrowser->clear();
            ui->textBrowser->append(QString::fromStdString(poli1));
            QTextCursor cursor = ui->textBrowser->textCursor();
            QTextBlockFormat textBlockFormat = cursor.blockFormat();
            textBlockFormat.setAlignment(Qt::AlignRight);
            cursor.mergeBlockFormat(textBlockFormat);
            ui->textBrowser->setTextCursor(cursor);
        }else{
            poli2.append("-");
            ui->textBrowser->clear();
            ui->textBrowser->append(QString::fromStdString(poli1));
            ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
            QTextCursor cursor = ui->textBrowser->textCursor();
            QTextBlockFormat textBlockFormat = cursor.blockFormat();
            textBlockFormat.setAlignment(Qt::AlignRight);
            cursor.mergeBlockFormat(textBlockFormat);
            ui->textBrowser->setTextCursor(cursor);
        }

    }else{
        ui->textBrowser->clear();
        ui->textBrowser->append(QString::fromStdString(poli1));
        ui->textBrowser->append(QString::fromStdString(poli2)+"    -");
        QTextCursor cursor = ui->textBrowser->textCursor();
        QTextBlockFormat textBlockFormat = cursor.blockFormat();
        textBlockFormat.setAlignment(Qt::AlignRight);
        cursor.mergeBlockFormat(textBlockFormat);
        ui->textBrowser->setTextCursor(cursor);

        poli_1=false;
    }
}

void MainWindow::on_buttonMult_clicked()
{
    this->operador = "multi";
    ui->textBrowser->clear();
    ui->textBrowser->append(QString::fromStdString(poli1));
    ui->textBrowser->append(QString::fromStdString(poli2)+"    +");
    QTextCursor cursor = ui->textBrowser->textCursor();
    QTextBlockFormat textBlockFormat = cursor.blockFormat();
    textBlockFormat.setAlignment(Qt::AlignRight);
    cursor.mergeBlockFormat(textBlockFormat);
    ui->textBrowser->setTextCursor(cursor);

    poli_1=false;
}

void MainWindow::on_buttone_clicked()
{

}

void MainWindow::on_buttonD_clicked()
{

}

void MainWindow::on_buttonC_clicked()
{

}

void MainWindow::on_buttonEqual_clicked()
{

}

//*********************************************************************************
