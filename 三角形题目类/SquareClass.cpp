#include "SquareClass.h"
#include<iostream>
SquareClass::SquareClass()
{
	a = 1;
}
SquareClass::SquareClass(double a,int type)
{
	this->a = a;
	this->type = type;
	area = a * a;
	circum = a * 4;
	if (type - 1)
	{
		stAnswer = circum;
	}
	else {
		stAnswer = area;
	}
}
double SquareClass::calarea() {
	return a * a;
}
double SquareClass::calcircum()
{
	return 4 * a;
}
int SquareClass::gettype() {
	return type;
}
void SquareClass::settype(int type)
{
	this->type = type;
}
void SquareClass::disp()
{
	std::cout << "题目信息：" << std::endl;
	std::cout << "求边长为：" << a << "的正方形";
	if (type == 1)
	{
		std::cout << "面积" << std::endl;
	}
	else if (type == 2)
	{
		std::cout << "周长" << std::endl;
	}
}
