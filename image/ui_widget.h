/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Wed Sep 4 16:43:42 2019
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *pushButton_d;
    QPushButton *pushButton_q;
    QPushButton *pushButton_l;
    QPushButton *pushButton_r;
    QLabel *result;
    QLabel *label_2;
    QLabel *label_index;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(799, 468);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 50, 500, 300));
        label->setStyleSheet(QString::fromUtf8(""));
        pushButton_d = new QPushButton(Widget);
        pushButton_d->setObjectName(QString::fromUtf8("pushButton_d"));
        pushButton_d->setGeometry(QRect(290, 406, 98, 41));
        pushButton_q = new QPushButton(Widget);
        pushButton_q->setObjectName(QString::fromUtf8("pushButton_q"));
        pushButton_q->setGeometry(QRect(420, 406, 98, 41));
        pushButton_l = new QPushButton(Widget);
        pushButton_l->setObjectName(QString::fromUtf8("pushButton_l"));
        pushButton_l->setGeometry(QRect(70, 380, 98, 27));
        pushButton_r = new QPushButton(Widget);
        pushButton_r->setObjectName(QString::fromUtf8("pushButton_r"));
        pushButton_r->setEnabled(true);
        pushButton_r->setGeometry(QRect(620, 380, 98, 27));
        result = new QLabel(Widget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setEnabled(true);
        result->setGeometry(QRect(670, 340, 66, 17));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 60, 61, 31));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);
        label_index = new QLabel(Widget);
        label_index->setObjectName(QString::fromUtf8("label_index"));
        label_index->setGeometry(QRect(100, 60, 31, 31));
        label_index->setFont(font);
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(670, 50, 111, 281));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton_d->setText(QApplication::translate("Widget", "\347\255\276\345\210\260", 0, QApplication::UnicodeUTF8));
        pushButton_q->setText(QApplication::translate("Widget", "\347\274\272\345\213\244", 0, QApplication::UnicodeUTF8));
        pushButton_l->setText(QApplication::translate("Widget", "\344\270\212\344\270\200\345\274\240", 0, QApplication::UnicodeUTF8));
        pushButton_r->setText(QApplication::translate("Widget", "\344\270\213\344\270\200\345\274\240", 0, QApplication::UnicodeUTF8));
        result->setText(QApplication::translate("Widget", "\347\274\272\345\213\244", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_index->setText(QApplication::translate("Widget", "1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
