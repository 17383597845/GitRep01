#pragma once
#include "PolygonClass.h"
class RectangleClass :
    public PolygonClass
{
public:
    RectangleClass();
    RectangleClass(double length, double wide,int type);

    int gettype();

    void settype(int type);

    std::string getstAnswer();

    void setstAnswer(std::string stAswer);

    std::string getuserAnswer();

    void setuserAnswer(std::string userAnswer);

    void disp();

private:
    double length;//³¤
    double wide;//¿í
    double area;
    double circum;
    std::string stAnswer;
    std::string userAnswer;
    int type;
};

