package p1;
import static java.lang.Math.*;
import java.util.Scanner;


class MathOperations
{
    public  static void main(String args[]) {

        Scanner scanner = new Scanner(System.in);

        double area,r,h,pi = 3.1415;

        System.out.println("Enter value of r & h");

        r = scanner.nextFloat();
        h = scanner.nextFloat();

        area = pi*pow(r,2) + 2*pi*r*h;

        System.out.println("Value : " + area);
    } 
}
