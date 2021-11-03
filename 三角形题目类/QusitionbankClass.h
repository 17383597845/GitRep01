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
	void addqus();//用户添加题目
	void delqus();//用户删除题目
	void addqus(double a,double b,double c,int type);//按边长题目类型添加三角形题目题目
	double calaver();//计算平均成绩
	bool work(int num, std::string ans);//输入用户答案
	void cal();//刷新成绩
	void search(int num);//查询题目信息
private:
	std::string name;//题库名
	int qusNum;//题目数量
	double aver;//平均成绩
	double* a;//保存各题成绩
	TriangleClass *qusb;//保存所有题目
};

