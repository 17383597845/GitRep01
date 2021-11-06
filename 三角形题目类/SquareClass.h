#pragma once
#include "PolygonClass.h"
class SquareClass :
    public PolygonClass
{
public:
    SquareClass();
    SquareClass(double a,int type);
    double calarea();
    double calcircum();
    int gettype();
    void settype(int type);
    void disp();
private:
    double a;//正方形边长
    int type;
    double area;
    double circum;
    std::string stAnswer;
    std::string userAnswer;
};

