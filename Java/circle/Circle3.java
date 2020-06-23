package circle;
public class Circle3 {
    private double radius = 1;
    private static int numberOfObject = 0;//初始化,静态变量
    public Circle3(){
        radius = 1.0;
        numberOfObject++;
    }//默认构造函数

    public Circle3(double t){
        radius = t;
        numberOfObject++;
    }
    
    public double getRadius(){
        return radius;
    }
    public void setRadius(double t){
        radius = (t>=0)? t:0;//大于0才行，否则改成0
    }
    public static int getNumberOfObject(){
        return numberOfObject;
    }

    public double getArea(){
        return radius*radius*Math.PI;//PI是math自带的
    }

}