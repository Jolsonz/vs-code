package example.Extends;

public class Test {
    public static void main(String[] hello) {
        Circle4 circle = new Circle4(5);
        System.out.println("A circle "+ circle.toString());
        System.out.println("The radius is "+circle.getRadius());
        System.out.println("The area is "+circle.getArea());
        System.out.println("The diameter is "+circle.getDiameter());
        System.out.println(circle.toString());
// 但是这里子类调用不了父类的构造方法和方法。要用super
        Rectangle1 rec = new Rectangle1(2,4);
        rec.setColor("pink");rec.setFilled(true);
        System.out.println("\nA rectangle "+ rec.toString() );
        System.out.println("The are is "+ rec.getArea());
        System.out.println("The perimeter is "+ rec.getPerimeter());
    }
}