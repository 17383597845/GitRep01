#pragma once
#include <string>
#include"PolygonClass.h"
class TriangleClass:
	PolygonClass
{
public:
	TriangleClass();
	TriangleClass(double x1, double x2, double x3);
	std::string jud();//判断三角形类型
	double getx1();
	void setx1(double x1);
	double getx2();
	void setx2(double x2);
	double getx3();
	void setx3(double x3);
	int getnum();
	void setnum(int x3);
	std::string getuserAnswer();
	std::string getstAnswer();
	void setuserAnswer(std::string userAswer);
	void setstAnswer(std::string stAnswer);
	int gettype();
	void settype(int type);
	double calcircum();//求周长
	double calarea();//求面积
	void disp();//输出全部数据
private:
	double x1, x2, x3;//三边
	int num;//题号
	std::string userAnswer;//用户答案
	std::string stAnswer;//标准答案
	int type;//题目类型
};

