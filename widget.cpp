#include <stdio.h>
#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    index = 1;

    for(int i=0; i<7; i++)
    {
        live[i] = 0;
    }

    ui->setupUi(this);
    ui->label->setStyleSheet("border-image:url(:/new/prefix1/photo/1.jpg)");
    //ui->pushButton_l->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_l_clicked()
{
    qDebug("%d",index--);
    if(index < 1) index = 6;

    ui->label_index->setText(QString::number(index));

    if(live[index] != 1)
    {
        ui->result->setText("缺勤");
    }
    else
    {
        ui->result->setText("签到");
    }

    char buf[256] = {};
    sprintf(buf,"border-image:url(:/new/prefix1/photo/%d.jpg)",index);
    ui->label->setStyleSheet(buf);
}

void Widget::on_pushButton_r_clicked()
{
    qDebug("%d",index++);
    if(index > 6) index = 1;

    ui->label_index->setText(QString::number(index));

    if(live[index] != 1)
    {
        ui->result->setText("缺勤");
    }
    else
    {
        ui->result->setText("签到");
    }

    char buf[256] = {};
    sprintf(buf,"border-image:url(:/new/prefix1/photo/%d.jpg)",index);
    ui->label->setStyleSheet(buf);
}

void Widget::on_pushButton_d_clicked()
{
    live[index] = 1;
    ui->result->setText("签到成功");
}

void Widget::on_pushButton_q_clicked()
{
    live[index] = 0;
    ui->result->setText("缺勤");
}
