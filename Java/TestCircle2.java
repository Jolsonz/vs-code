public class TestCircle2 {
   public static void main(String[] args) {
       System.out.println("在没实例化之前\n"+"实例的个数 "+ Circle2.getNumberOfObject());
       Circle2 c1 = new Circle2();
       System.out.println("创建C1后\n"+"目前的实例个数="+Circle2.getNumberOfObject()+"   C1的半径="+c1.radius+"    c1的面积="+c1.getArea());
       Circle2 c2 = new Circle2(9.0);
       c1.radius = 0.3;//改变c1的半径
       System.out.println("创建C2后\n"+"目前的实例个数="+Circle2.getNumberOfObject()
       +"   C1的半径="+c1.radius+"    c1的面积="+c1.getArea()
       +"   C2的半径="+c2.radius+"    c2的面积="+c2.getArea());

    } 
}