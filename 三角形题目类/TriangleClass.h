#pragma once
#include <string>
#include"PolygonClass.h"
class TriangleClass:
	PolygonClass
{
public:
	TriangleClass();
	TriangleClass(double x1, double x2, double x3);
	std::string jud();//�ж�����������
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
	double calcircum();//���ܳ�
	double calarea();//�����
	void disp();//���ȫ������
private:
	double x1, x2, x3;//����
	int num;//���
	std::string userAnswer;//�û���
	std::string stAnswer;//��׼��
	int type;//��Ŀ����
};

