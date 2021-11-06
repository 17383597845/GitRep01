#include<iostream>
#include<sstream>
#include "QusitionbankClass.h"
#include"TriangleClass.h"
QusitionbankClass::QusitionbankClass()
{
		this->qusb = new TriangleClass[100];
			this->a = new double[100];
			a[100] = { 0 };
}
QusitionbankClass::QusitionbankClass(std::string name = "Trianglebank", int qusNum = 0, double aver = 0) {
	this->name = name;
	this->qusNum = qusNum;
	this->aver = aver;
	
}
std::string QusitionbankClass::getname()
{
	return name;
}
void QusitionbankClass::setname(std::string name)
{
	this->name = name;
}
int QusitionbankClass::getqusNum()
{
	return qusNum;
}
double QusitionbankClass::getaver()
{
	return aver;
}
void QusitionbankClass::addqus()
{
	int a, b, c;
	std::cout << "��������Ҫ��ӵ������������߳�" << std::endl;
	while (1) {//������벻�Ϸ�����������
		std::cin >> a >> b >> c;
		if (a >= b + c || b >= a + c || c >= a + b) {
			std::cout << "�������벻�Ϸ����������룺" << std::endl;
		}
		else {
			break;
		}
	}
	TriangleClass qus(a, b, c);
	std::cout << "������������ͣ�\n" << "��1��ʾ����Ϊ�������\n" << "��2��ʾ���ܳ���\n" << "��3��ʾ�ж����������ͣ�\n";
	int type;
	std::cin >> type;
	std::string stans;
	if (type == 1)
	{
		std::stringstream ss;
		double area = qus.calarea();
		ss << area;
		ss >> stans;
	}
	else if (type == 2)
	{
		std::stringstream ss;//�ٶȵģ������ǽ�doubleת��Ϊ�ַ���
		double c = qus.calcircum();
		ss << c;
		ss >> stans;
	}
	else if(type==3){
		stans = qus.jud();
	}
	qus.setstAnswer(stans);//��׼������
	qus.settype(type);//����Ŀ��������
	qusNum++;
	qusb[qusNum-1] = qus;
	cal();
	aver = calaver();
	std::cout << "��Ŀ��ӳɹ�����ӵ���Ŀ���Ϊ��" << qusNum << std::endl;
}
void QusitionbankClass::addqus(double a,double b,double c,int type) {
	TriangleClass qus(a, b, c);
	std::string stans;
	if (type == 1)
	{
		
		std::stringstream ss;
		double area = qus.calarea();
		ss << area;
		ss >> stans;
	}
	else if (type == 2)
	{
		std::stringstream ss;
		double c = qus.calcircum();
		ss << c;
		ss >> stans;
	}
	else if (type == 3) {
		stans = qus.jud();
	}
	qus.setstAnswer(stans);
	qus.settype(type);//����Ŀ��������
	qusNum++;//��Ŀ������һ
	qusb[qusNum-1] = qus;
	cal();//ˢ�·���
	aver = calaver();//ˢ��ƽ����

}
void QusitionbankClass::delqus()
{
	int num;
	std::cout << "��������Ҫɾ����Ŀ�ţ�" << std::endl;
	std::cin >> num;
	if (num > qusNum)
	{
		std::cout << "���������Ŀ�����ڣ�" << std::endl;
	}
	else {
		for (int i = num - 1; i < qusNum-1; i++)
		{
			qusb[i] = qusb[i + 1];
			a[i] = a[i + 1];
		}
		qusNum--;
		std::cout << "���ɹ�ɾ���˵�" << num << "�⣻" << std::endl;
	}
}
bool QusitionbankClass::work(int num, std::string ans)
{
	
	if (num <= qusNum && num >= 0) {
		qusb[num - 1].setuserAnswer(ans);//�����û���
		cal();//�������÷�
		return 1;
	}
	else {
		return 0;
	}

}
double QusitionbankClass::calaver()
{
	int length = qusNum;
	double aver = 0;
	for (int i = 0; i < length; i++)
	{
		aver += a[i];
	}
	aver /= length;
	return aver;
}
void QusitionbankClass::cal()
{
	int length = qusNum;
	for (int i = 0; i < length; i++)
	{
		//std::cout << qusb[i].getstAnswer() << " " << qusb[i].getuserAnswer() << std::endl;

		if (qusb[i].getuserAnswer() == "kong")
		{
			a[i] = 0;
		}
		else if(qusb[i].getuserAnswer()!=qusb[i].getstAnswer()){
			a[i] = 0;
		}
		else {
			a[i] = 5;
		}
	}
}
void QusitionbankClass::search(int num)
{
	if (num > qusNum) {
		std::cout << "���Ĳ�ѯ���Ϸ�";
	}
	else {
		std::cout << "�������εģ�";
		qusb[num - 1].disp();
		if (qusb[num - 1].gettype() == 1)
		{
			std::cout << "������Ŀ�������������������\n";
		}
		else if (qusb[num - 1].gettype() == 2) {
			std::cout << "������Ŀ���������������ܳ���\n";
		}
		else if (qusb[num - 1].gettype() == 3) {
			std::cout << "������Ŀ�����������������ͣ�\n";
		}
		//std::cout << "�����׼��Ϊ" << qusb[num - 1].getstAnswer() << std::endl;
		std::cout << "�û���Ϊ��" << qusb[num - 1].getuserAnswer()<<" �÷�Ϊ��" <<a[num-1]<< std::endl;

	}
}