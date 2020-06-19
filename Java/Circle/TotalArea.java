public class TotalArea {
    public static void main(String[] args) {
        Circle3[] circleArray;
        circleArray = createCircleArray();
        printCircleArray(circleArray);
    }

    public static Circle3[] createCircleArray(){
        Circle3[] t = new Circle3[5];//开长为5的数组
        for(int i=0;i<t.length;i++){
            t[i] = new Circle3(Math.random()*100);//随机0-100的值来赋值初始化
        }
        return t;
    }
    public static void printCircleArray(Circle3[] t){
        System.out.printf("%-30s%-15s\n", "Radius", "Area");//%-30s指的是从右往左，第30个字符的位置开始。
        for(var i : t){
            System.out.printf("%-30f%-15f\n",i.getRadius(),i.getArea());
        }
        System.out.println("-------------------------------------------------");
        System.out.printf("%-30s%-15f\n","圆的总面积是",sum(t));
    }
    public static double sum(Circle3[] t){
        double sum = 0;
        for(var i : t){
            sum+=i.getArea();
        }
        return sum;
    }
}