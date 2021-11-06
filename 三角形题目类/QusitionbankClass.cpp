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
	std::cout << "请输入你要添加的题三角形三边长" << std::endl;
	while (1) {//如果输入不合法即重新输入
		std::cin >> a >> b >> c;
		if (a >= b + c || b >= a + c || c >= a + b) {
			std::cout << "您的输入不合法请重新输入：" << std::endl;
		}
		else {
			break;
		}
	}
	TriangleClass qus(a, b, c);
	std::cout << "请输入该题类型：\n" << "按1表示该题为求面积；\n" << "按2表示求周长；\n" << "按3表示判断三角形类型；\n";
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
		std::stringstream ss;//百度的，作用是将double转化为字符串
		double c = qus.calcircum();
		ss << c;
		ss >> stans;
	}
	else if(type==3){
		stans = qus.jud();
	}
	qus.setstAnswer(stans);//标准答案输入
	qus.settype(type);//将题目类型输入
	qusNum++;
	qusb[qusNum-1] = qus;
	cal();
	aver = calaver();
	std::cout << "题目添加成功，添加的题目编号为：" << qusNum << std::endl;
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
	qus.settype(type);//将题目类型输入
	qusNum++;//题目数量加一
	qusb[qusNum-1] = qus;
	cal();//刷新分数
	aver = calaver();//刷新平均分

}
void QusitionbankClass::delqus()
{
	int num;
	std::cout << "请输入您要删除题目号：" << std::endl;
	std::cin >> num;
	if (num > qusNum)
	{
		std::cout << "您输入的题目不存在；" << std::endl;
	}
	else {
		for (int i = num - 1; i < qusNum-1; i++)
		{
			qusb[i] = qusb[i + 1];
			a[i] = a[i + 1];
		}
		qusNum--;
		std::cout << "您成功删除了第" << num << "题；" << std::endl;
	}
}
bool QusitionbankClass::work(int num, std::string ans)
{
	
	if (num <= qusNum && num >= 0) {
		qusb[num - 1].setuserAnswer(ans);//存入用户答案
		cal();//计算该题得分
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
		std::cout << "您的查询不合法";
	}
	else {
		std::cout << "该三角形的：";
		qusb[num - 1].disp();
		if (qusb[num - 1].gettype() == 1)
		{
			std::cout << "该题题目类型是求三角形面积；\n";
		}
		else if (qusb[num - 1].gettype() == 2) {
			std::cout << "该题题目类型是求三角形周长；\n";
		}
		else if (qusb[num - 1].gettype() == 3) {
			std::cout << "该题题目类型是求三角形类型；\n";
		}
		//std::cout << "该题标准答案为" << qusb[num - 1].getstAnswer() << std::endl;
		std::cout << "用户答案为：" << qusb[num - 1].getuserAnswer()<<" 得分为：" <<a[num-1]<< std::endl;

	}
}