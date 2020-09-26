public class Person {
    public static int total;
    static{
        total =100;
        System.out.println("in static block");
    }
    public void prt(){
        System.out.println("未重写之前");
    }
}