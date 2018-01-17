#pragma once

#include <QWidget>
#include <qmainwindow.h>
#include "ui_QtConfig.h"

class QtConfig : public QMainWindow
{
	Q_OBJECT

public:
	QtConfig(QWidget *parent = Q_NULLPTR);
	~QtConfig();
public slots:
	void toggled(int checked);
private:
	Ui::QtConfig ui;
};
