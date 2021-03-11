#include "MainWindow.h"
#include <QPushButton>
#include <QSize>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {


	b_close.setParent(this);
	b_close.setText("close");
	const QSize BUTTON_SIZE = QSize(100, 50);
	b_close.resize(BUTTON_SIZE);


	connect(&b_close, &QPushButton::pressed, this, &MainWindow::close);
}


MainWindow::~MainWindow() {
}

