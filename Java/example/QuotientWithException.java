package example;

import java.util.Scanner;

// 抛出异常
public class QuotientWithException {
    public static void main(String[] args) {
        Scanner inpute = new Scanner(System.in);
        System.out.println("Enter two int ");
        int number1 = inpute.nextInt();
        int number2 = inpute.nextInt();
        inpute.close();
        try{
            if(number2 == 0) 
                throw new ArithmeticException("Divisor cannot be zero");
            System.out.println(number1 + " / " + number2 + " = "+ (number1/number2));
        }
        catch(ArithmeticException ex){
            System.out.println("被除数不能为0");
            System.out.println(ex);//单纯打印
            ex.printStackTrace();//返回调用栈的跟踪消息，更详细
            throw ex;//这个重新抛出不知道调用了啥，反正也打印了，更详细
        } 
    }
}