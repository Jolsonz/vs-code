package string;

public class string3 {
    public static void main(String[] args) {
        String s = "java";
        s = "hello";
        //这里实际上只是把s重新指向一个新的字符串对象"hello",而不是改变了原来的"java"
        System.out.println(s);
    }
}