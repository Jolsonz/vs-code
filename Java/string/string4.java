package string;
public class string4 {
    public static void main(String[] args) {
        
        String[] t = "java#html#python".split("#",0);//这两个参数没搞懂
        for(var i : t){
            System.out.print(i+" ");
        }
        System.out.println();
        t = "Java,c?c#;c++".split("[.?:;,]");
        for(var i:t) System.out.println(i);
    }
}