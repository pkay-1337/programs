package literal;
import java.util.Scanner;

public class literal {
    String name,gender,address;
    Byte age;
    //Integer qty;
    Double rate;
    Boolean status;
    public void input() {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter your name : ");
        name = s.nextLine();
        System.out.println("Enter Your Gender : ");
        gender = s.nextLine();
        System.out.println("Enter Your Address : ");
        address = s.nextLine();
        System.out.println("Enter Your Age : ");
        age = s.nextByte();
        System.out.println("Enter Your Rate : ");
        rate = s.nextDouble();
        System.out.println("Are You Above 18? : ");
        status = s.nextBoolean();
    }
    public void display(){
        System.out.println("\n\n\n\n\nMy name is :" + name);
        System.out.println("My Gender is :" + gender);
        System.out.println("My Age is :" + age);
        System.out.println("Rate of Item :" + rate);
        System.out.println("Address : " + address);
        if (status == true){
            System.out.println("You are over 18");
        } else if (status == false){
            System.out.println("You are under 18");
        }
    }
    public static void main(String[] args) {
        literal x = new literal();
        x.input();
        x.display();

    }
}
