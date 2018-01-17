#include "QtConfig.h"

#include "config.h"

QtConfig::QtConfig(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.checkBox->setChecked(config->testBool);
}

QtConfig::~QtConfig()
{
}

void QtConfig::toggled(int changed)
{
	config->testBool = changed;
}