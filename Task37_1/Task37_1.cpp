#include "Task37_1.h"
#include"QString"
Task37_1::Task37_1(QWidget *parent): QMainWindow(parent)
{
    ui.setupUi(this); 
}
QString Task37_1::result()
{
	QString temp = ui.lineEdit->text();
	std::string tem = temp.toStdString();
	std::stringstream text(tem);
	int a;
	char b;
	int c;
	int result = 0;
	text >> a >> b >> c;
	switch (b)
	{
	case '+':
		result = a + c;
		break;
	case'-':
		result = a - c;
		break;
	case '*':
		result = a * c;
		break;
	case '/':
		result = a / c;
		break;
	default:

		break;
	}
	tem = std::to_string(result);
	return QString::fromStdString(tem);
}
	Task37_1::~Task37_1()
	{}
