package circle;
public class Circle2 {
    double radius;
    static private int numberOfObject = 0;//初始化,静态变量
    Circle2(){
        radius = 1.0;
        numberOfObject++;
    }//默认构造函数

    Circle2(double t){
        radius = t;
        numberOfObject++;
    }

    static int getNumberOfObject(){
        return numberOfObject;
    }

    double getArea(){
        return radius*radius*Math.PI;//PI是math自带的
    }

}