package abcd;

public class run {
    
    public static void main(String[] args) {
        a a1 = new b();
        b b1 = new b();
        System.out.println(a1.show(b1));
        //类型在左边确定，这里b1被看做b类的，但调用的方法在右边确定，优先在b类中找到方法

        f c1 = new b();
        System.out.println(a1.show(c1));
        //类型确定为f，在b中找不到对应方法，但在a中找到了，故打印a and f
        //于是我在b中多加一个形参为f的方法，这时候就优先匹配它了

        /*
            总的来说，形参类型确定，看左边，实际方法确定，优先从右边实际类型中找。
        */
    }
}