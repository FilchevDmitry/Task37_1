#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Task37_1.h"
#include <QtWidgets/QLineEdit>
#include<QString>
#include<iostream>
#include<string>
#include<sstream>
class Task37_1 : public QMainWindow
{
    Q_OBJECT

private:
    Ui::Task37_1Class ui;
public:
    QLineEdit* lineEdit = nullptr;
    Task37_1(QWidget *parent = nullptr);
    QString result();
    ~Task37_1();
public slots:
    void add0() { ui.lineEdit->setText(ui.lineEdit->text() + "0"); };
    void add1() { ui.lineEdit->setText(ui.lineEdit->text() + "1"); };
    void add2() { ui.lineEdit->setText(ui.lineEdit->text() + "2"); };
    void add3() { ui.lineEdit->setText(ui.lineEdit->text() + "3"); };
    void add4() { ui.lineEdit->setText(ui.lineEdit->text() + "4"); };
    void add5() { ui.lineEdit->setText(ui.lineEdit->text() + "5"); };
    void add6() { ui.lineEdit->setText(ui.lineEdit->text() + "6"); };
    void add7() { ui.lineEdit->setText(ui.lineEdit->text() + "7"); };
    void add8() { ui.lineEdit->setText(ui.lineEdit->text() + "8"); };
    void add9() { ui.lineEdit->setText(ui.lineEdit->text() + "9"); };
    void minus() { ui.lineEdit->setText(ui.lineEdit->text() + "-"); };
    void plus() { ui.lineEdit->setText(ui.lineEdit->text() + "+"); };
    void del() { ui.lineEdit->setText(ui.lineEdit->text() + "/"); };
    void mult() { ui.lineEdit->setText(ui.lineEdit->text() + "*"); };
    void sum() 
    {
       
        ui.lineEdit->setText(result());
        
    };
    void clear_num() { ui.lineEdit->clear(); };


};

