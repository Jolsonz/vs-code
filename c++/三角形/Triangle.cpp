
#include "Triangle.h"


Triangle::Triangle(double sideAIn, double sideBIn, double sideCIn)
{
    //首先要满足两边之和大于第三边
    if( ((sideAIn+sideBIn)<=sideCIn) || ((sideAIn+sideCIn)<=sideBIn) || ((sideCIn+sideBIn)<=sideAIn) ){
        cout<<"Invalid Triangle\n";
        exit(100);//这句干嘛的，自动退出？
    } 
    sideA=sideAIn;
    sideB=sideBIn;
    sideC=sideCIn;
    halfPeri();
    calcArea();
    return;
}

void Triangle :: calcArea(){//这个函数是私有成员，不会自动补全的,计算面积
    double halfPeri = perimeter/2;//这里也不会补全
    area = (halfPeri * (halfPeri -sideA)* (halfPeri - sideB)* (halfPeri - sideC));
    area = sqrt(area);
    return ;

}
void Triangle :: halfPeri(){//这个也是私有成员，都不会补全？
    perimeter= sideA+sideB+sideC;
    return;
}
