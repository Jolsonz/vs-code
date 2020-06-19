import java.util.Scanner;

public class Area {
    public static void main(final String[] args) {
        final Scanner inpute = new Scanner(System.in);
        final double r = inpute.nextDouble();
        double area;
        area=r*r*3.14;
        System.out.println("THE r is "+ r + "    Area is = " + area);
        System.out.print("hello");
        inpute.close();
    }
}