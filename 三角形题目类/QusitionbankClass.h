#pragma once
#include<string>
#include<iostream>
#include"TriangleClass.h"
class QusitionbankClass
{
public:
	QusitionbankClass();
	QusitionbankClass(std::string name, int qusNum, double aver);
	std::string getname();
	void setname(std::string name);
	int getqusNum();
	double getaver();
	void addqus();//�û������Ŀ
	void delqus();//�û�ɾ����Ŀ
	void addqus(double a,double b,double c,int type);//���߳���Ŀ���������������Ŀ��Ŀ
	double calaver();//����ƽ���ɼ�
	bool work(int num, std::string ans);//�����û���
	void cal();//ˢ�³ɼ�
	void search(int num);//��ѯ��Ŀ��Ϣ
private:
	std::string name;//�����
	int qusNum;//��Ŀ����
	double aver;//ƽ���ɼ�
	double* a;//�������ɼ�
	TriangleClass *qusb;//����������Ŀ
};

