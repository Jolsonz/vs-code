// 例2-11
import javax.swing.JOptionPane;
/**
 * 这道题例题给我最主观的感受就是，有点麻烦
 * 命名麻烦，一长串，还好编辑器给提示
 * 显示出窗口麻烦，一长段，还好最简单的调用只需要一个参数，不是很麻烦
 * 类型转换也麻烦。
 */
public class p45 {
    public static void main(String[] args) {
        String annualInterestRateString = JOptionPane.showInputDialog("Enter yearly interest rate:","8.25");
        double annualInterestRate = Double.parseDouble(annualInterestRateString);
        double monthInterestRate = annualInterestRate / 1200;
        String numberOfYearString = JOptionPane.showInputDialog(
            "Enter number of years as an integer:", "5");
        int numberOfYear = Integer.parseInt(numberOfYearString);
        
        String loanString = JOptionPane.showInputDialog("Enter Loan amount:", "120000.95");
        double loanAmount = Double.parseDouble(loanString);
        double monthlyPayment = loanAmount * monthInterestRate / (
            1 - 1/Math.pow(1+monthInterestRate,numberOfYear*12)
        );
        double totalPayment = monthlyPayment *numberOfYear *12;
        monthlyPayment = (int) monthlyPayment;//这个操作时为了去除小数位，保留一位小数？感觉没太大必要吧
        totalPayment = (int) totalPayment;
        String output = " The monthly payment is "+ monthlyPayment + "\n The total payment is" + totalPayment;
        JOptionPane.showMessageDialog(null, output,"Result",JOptionPane.INFORMATION_MESSAGE);
    }
}