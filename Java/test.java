public class test {
    public static void main(String args[]){
      String a="123a",b="123.45";
      int intValue=Integer.parseInt(a);
      double doubleValue=Double.parseDouble(b);
      System.out.print(intValue + "\n" + b);//注意'\n'不起作用,需双引号
    }
 }
 