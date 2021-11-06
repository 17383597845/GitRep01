#pragma once
#include<string>
class PolygonClass
{
public:
	PolygonClass();
	virtual double  calarea()=0;//求面积
	virtual double  calcircum()=0;//求周长
	virtual int gettype()=0;//求题目类型
	virtual void  settype(int type)=0;//设置题目类型
	virtual void setstAnswer(std::string stAnswer)=0;
	virtual std::string getstAnswer()=0;
	virtual void setuserAnswer(std::string userAswer)=0;
	virtual std::string getuserAnswer()=0;
	virtual std::string jud();
	virtual void disp()=0;
private:
	double area;
	double circum;
	int type;
	std::string stAswer;
	std::string userAswer;
};

