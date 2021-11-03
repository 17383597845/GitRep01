#include "TriangleClass.h"
#include<math.h>
#include<iostream>
TriangleClass::TriangleClass()
{

}
TriangleClass::TriangleClass(double x1,double x2,double x3) {
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->userAnswer = "kong";
}
std::string TriangleClass::judge() {

	if (this->x1 > this->x2 + this->x3 || this->x2 > this->x1 + this->x3 || this->x3 > this->x1 + this->x2) {
		return "不是三角形";
	}
	else {
		if (this->x1 == this->x2 && this->x2 == this->x3)
		{
			//std::cout << "是等边三角形" << std::endl;
			return "等边三角形";
		}
		else if (this->x1 == this->x2 || this->x1 == this->x3 || this->x2 == this->x3) {
			//std::cout << "是等腰三角形" << std::endl;
			return "等腰三角形";
		}
		else {
			double A = this->x1 * this->x1;
			double B = this->x2 * this->x2;
			double C = this->x3 * this->x3;
			if (A > B + C || B > A + C || C > A + B)
			{
				//std::cout << "是钝角三角形" << std::endl;
				return "钝角三角形";
			}
			else if (A == B + C||B==A+C||C==A+B)
			{
				//std::cout << "是直角三角形" << std::endl;
				return "直角三角形";
			}
			else {
				//std::cout << "是锐角三角形" << std::endl;
				return "锐角三角形";
			}
		}
	}
}
double TriangleClass::getx1() {
	return this->x1;
}
double TriangleClass::getx2() {
	return this->x2;
}
double TriangleClass::getx3() {
	return this->x3;
}
void TriangleClass::setx1(double x1) {
	this->x1 = x1;
}
void TriangleClass::setx2(double x2) {
	this->x2 = x2;
}
void TriangleClass::setx3(double x3) {
	this->x3 = x3;
}
std::string TriangleClass:: getuserAnswer()
{
	return userAnswer;
}
std::string TriangleClass::getstAnswer()
{
	return stAnswer;
}
void TriangleClass::setstAnswer(std::string stanswer) {
	this->stAnswer = stanswer;
}
void TriangleClass::setuserAnswer(std::string useranser)
{
	this->userAnswer = useranser;
}
int TriangleClass::gettype()
{
	return type;
}
void TriangleClass::settype(int type)
{
	this->type = type;
}
double TriangleClass::circum()
{
	return this->x1 + this->x2 + this->x3;
}
double TriangleClass::area() {
	double p = 0.5 * circum();
	return sqrt(p * (p - this->x1) * (p - this->x2) * (p - this->x3));
}
void TriangleClass::dispall()
{
	std::cout << "三边分别为" << this->x1 << ' ' << this->x2 << ' ' << this->x3 << std::endl;
	//std::cout << "周长为" << circum() << std::endl;
	//std::cout << "面积为" << area() << std::endl;
}
