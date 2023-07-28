package constant;
import java.util.Scanner;
class Main{
    private static final double PRICE=234.90;
    public static void main(String[] args) {
        int unit;
        double total_bill;
        //PRICE = 900;
        System.out.print("Enter the number of units you have used: ");
        Scanner s = new Scanner(System.in);
        unit = s.nextInt();
        total_bill=PRICE*unit;
        System.out.println("The total amount you have to deposit is:"+total_bill);
    }

}
