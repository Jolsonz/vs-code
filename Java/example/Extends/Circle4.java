package example.Extends;

public class Circle4 extends GeometricObject1{
    private double radius;
    public Circle4(){}
    public Circle4(double r){
        this.radius =r;
    }
    public Circle4(double radius,String color ,boolean filled){
        super(color,filled);//调用父类的构造方法，必须在第一行
        this.radius =radius;
    }

    public double getRadius(){//半径
        return radius;
    }

    public void setRadius(double radius){
        this.radius = radius;
    }

    public double getArea(){
        return radius*this.radius*Math.PI;
    }

    public double getDiameter() {//直径
        return 2*radius;        
    }
    public double getPerimeter(){//周长
        return Math.PI*getDiameter();//2πR
    }
    public void printCircle4() {
        System.out.println("this circle is created "+ getDataCreated()+
        "\n and the radius is  " + radius);
        
    }
    public String toString(){
        return super.toString()+"\n radius is "+ radius;
    }

}