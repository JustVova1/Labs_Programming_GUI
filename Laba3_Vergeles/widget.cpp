#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    btn = new QPushButton("Push", this);
    lbl = new QLabel("Push the button", this);
    lbl->move(50, 50);
    btn->setText("Hello");
    btn->setToolTip("Poka");
    //btn->setEnabled(false);//

    connect(btn, SIGNAL(clicked()), this, SLOT(change()));
}

Widget::~Widget()
{
}

