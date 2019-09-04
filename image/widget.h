#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    int index;
    int live[7];
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    
private slots:
    void on_pushButton_l_clicked();

    void on_pushButton_r_clicked();

    void on_pushButton_d_clicked();

    void on_pushButton_q_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
