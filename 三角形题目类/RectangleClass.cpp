#include "RectangleClass.h"
#include "TriangleClass.h"
#include<iostream>
RectangleClass::RectangleClass()
{
	length = 2;
	wide = 1;
	type = 1;
	area = 2;
	circum = 6;
	stAnswer = 2;
	userAnswer = -1;
}
RectangleClass::RectangleClass(double length, double wide, int type)
{
	this->length = length;
	this->wide = wide;
	this->type = type;
	area = length * wide;
	circum = 2 * (length + wide);
	if (type - 1)
	{
		stAnswer = circum;
	}
	else {
		stAnswer = area;
	}
}
int  RectangleClass::gettype()
{
	return type;
}
void RectangleClass::settype(int type)
{
	this->type = type;
}
std::string RectangleClass::getstAnswer()
{
	return stAnswer;
}
void RectangleClass::setstAnswer(std::string stAswer)
{
	this->stAnswer = stAswer;
}
std::string RectangleClass::getuserAnswer()
{
	return userAnswer;
}
void RectangleClass::setuserAnswer(std::string userAnswer) {
	this->userAnswer = userAnswer;
}
void RectangleClass::disp()
{
	std::cout << "题目信息：" << std::endl;
	std::cout << "求长为：" <<length << "宽为："<<wide<<"的长方形的：";
	if (type == 1)
	{
		std::cout << "面积" << std::endl;
	}else if(type == 2)
	{
		std::cout << "周长" << std::endl;
	}
}