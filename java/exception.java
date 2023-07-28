package input;
import java.io.DataInputStream;
import java.io.IOException;
class Main{
public static void main(String[] args) {
        int a,b,add,sub,multi,div;
        DataInputStream i = new DataInputStream(System.in);
        try{
            System.out.println("Enter 2 Numbers : ");
            a = Integer.parseInt(i.readLine());
            b = Integer.parseInt(i.readLine());
            add = a+b;
            sub = a-b;
            multi = a*b;
            div = a/b;
            System.out.println("Addition = "+ add + " Sub = " + sub + " Multiplication = " + multi + " Division = " + div);
        }catch(IOException test){
            System.out.println(test);
        }catch(ArithmeticException e){
            System.out.println("You are dividing by zero. EDIOT!!!\n" + e.getMessage());
        }catch(NumberFormatException e){
            System.out.println("Put a Number!!! EDIOT!!!\n" + e.getMessage());
        }catch(Exception e){
            System.out.println(e);
        }
    }
}
