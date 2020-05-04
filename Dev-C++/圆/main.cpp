#include"Cylinder.h"

int main()
{
    Cylinder cy1(3, 3, 5, 6);//初始化
    cout << "original cylinder:" << cy1 << endl;
    cy1.setPoint(-2, -2);
    cy1.setR(8);
    cy1.setH(10);
    cout << "new cylinder: " << cy1 << endl;
    Point &p1 = cy1;
    cout << "as a point: " << p1 << endl;
    Circle &c1 = cy1;
    cout << "as a circle: " << c1 << endl;
    return 0;
}