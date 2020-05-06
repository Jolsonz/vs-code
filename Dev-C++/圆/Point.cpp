#include<iostream>
#include"Point.h"
using namespace std;

Point::Point(float a, float b){//构造函数
    x = a;
    y = b;
}

float Point::getX(){
    return x;
}
float Point::getY(){
    return y;
}
void Point::setPoint(float a, float b){
    x = a;
    y = b;
}

ostream& operator<<(ostream &output, const Point &p)    //重载运算符“<<”
{
    output << "(" << p.x << "," << p.y << ")" << endl;
    return output;
}
