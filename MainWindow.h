#pragma once

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
	Q_OBJECT

public:
        MainWindow(QWidget *parent = 0);
        void sendSlot();
	~MainWindow();

signals:
	void mySignal();

private:
	QPushButton b_close;
	Ui::MainWindow *ui;
};
