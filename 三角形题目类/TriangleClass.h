#pragma once
#include <string>
class TriangleClass
{
public:
	TriangleClass();
	TriangleClass(double x1, double x2, double x3);
	//void myans(std::string ans);
	std::string judge();//�ж�����������
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
	double circum();//���ܳ�
	double area();//�����
	void dispall();//���ȫ������
private:
	double x1, x2, x3;//����
	int num;//���
	std::string userAnswer;//�û���
	std::string stAnswer;//��׼��
	int type;//��Ŀ����
};

