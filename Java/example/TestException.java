package example;

public class TestException {
    public static void main(String[] args) {
        try{
            System.out.println(sum(new int[] {1,2,3,4,5}));
        }
        catch(Exception ex){
            ex.printStackTrace();//总的来说这个比较实用，把所有要用的信息都给了
            System.out.println();
            System.out.println(ex.getMessage()+'\n'+ex.toString());//这两个信息基本一样，都是报错信息
            System.out.println();
            StackTraceElement[] traceElements = ex.getStackTrace();
            for(int i =0;i<traceElements.length;i++){
                System.out.println("method "+traceElements[i].getMethodName());//方法名
                System.out.println("("+traceElements[i].getClassName());//类名，就是.class文件名
                System.out.println(traceElements[i].getLineNumber()+")");//行号
            }
        }
    }

    private static int sum(int[] t){
        int result =0;
        for(int i=0;i<=t.length ;i++){//这里不能用等号，数组越界了
            result +=t[i];
        }
        return result;
    }
}