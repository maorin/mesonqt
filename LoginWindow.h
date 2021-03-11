#pragma once

#include <QMainWindow>
#include <QPushButton>
#include "MainWindow.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow {
	Q_OBJECT

public:
        LoginWindow(QWidget *parent = 0);
        void loginSpice();
        void dealsub();

	~LoginWindow();
private:
	QPushButton b_login;
	//QPushButton b_close;
	MainWindow w;
	Ui::LoginWindow *ui;


};
