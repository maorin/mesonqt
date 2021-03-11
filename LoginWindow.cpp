#include "LoginWindow.h"
#include <QWidget>
#include <QPushButton>
#include <QSize>


LoginWindow::LoginWindow(QWidget *parent) : QMainWindow(parent) {


	b_login.setParent(this);
	b_login.setText("login");
	const QSize BUTTON_SIZE = QSize(100, 50);
	b_login.resize(BUTTON_SIZE);

	/*
	b_close.setParent(this);
	b_close.setText("close");
	b_close.resize(BUTTON_SIZE);
	*/

	//connect(&b_close, &QPushButton::pressed, this, &LoginWindow::close);

	connect(&b_login, &QPushButton::pressed, this, &LoginWindow::loginSpice);

}


LoginWindow::~LoginWindow() {
}

void LoginWindow::loginSpice(){
	//b_login.setText("l111");
	w.show();
	this->hide();
}
