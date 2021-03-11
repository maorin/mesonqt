#include "LoginWindow.h"
#include "MainWindow.h"
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

	connect(&w, &MainWindow::mySignal, this, &LoginWindow::dealsub);

}


LoginWindow::~LoginWindow() {
}

void LoginWindow::loginSpice(){
	//b_login.setText("l111");
	w.show();
	this->hide();
}

void LoginWindow::dealsub(){
	//b_login.setText("l111");
	w.hide();
	this->show();
}
