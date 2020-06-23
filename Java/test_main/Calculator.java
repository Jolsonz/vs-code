package test_main;

public class Calculator {
    public static void main(final String[] args) {
        if(args.length != 3){
            System.out.println("输入参数错误，应该输入3个");
            System.exit(0);//退出程序
        }
        int result=0;
        switch(args[1].charAt(0)){
            case '+':
                result = Integer.parseInt(args[0])+Integer.parseInt(args[2]);
                break;
            case '-':
                result = Integer.parseInt(args[0])-Integer.parseInt(args[2]);
                break;
            case '*':
                result = Integer.parseInt(args[0])*Integer.parseInt(args[2]);
                break;
            case '/':
                result = Integer.parseInt(args[0])/Integer.parseInt(args[2]);
                break;
            default:
                System.out.println("请输入正确的符号");
                System.exit(0);
        }
        System.out.println(args[0]+' '+args[1]+' '+args[2]+ " = " +result);

    }
}