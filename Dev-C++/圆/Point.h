#ifndef POINT_H
#define POINT_H
#include<iostream>    //头文件也需要包含这个
using namespace std;

class Point
{
protected:
    float x, y;
public:
    Point(float a = 0, float b = 0);     //带默认参数的构造函数的声明
    float getX();
    float getY();
    void setPoint(float, float);
    friend ostream& operator<<(ostream &output, const Point &p);    //运算符重载
    // 全局运算符重载，用到了Point类中的protected成员，但是运算符重载函数又不是Point类的成员，所以要声明友元
};

#endif
