// create IllegalAgeException user defined exception and raise it 
// if age is less than 18.
// create a class person to input age after that check who is elligible for voting
// or not.
package exc;
import java.io.*;
class person{
    public int age;
    public person(int x){
        age = x;
    }
    public void show(){
        System.out.println("age = " + age);
    }
}
class IllegalAgeException extends Exception{
    IllegalAgeException(String msg){
        super(msg); // calling constructor of super class
    }
}
class Main{
    public static void main(String[] args) throws IOException {
        DataInputStream i = new DataInputStream(System.in);
        int x;
        System.out.print("Enter Your age : ");
        x = Integer.parseInt(i.readLine());
        person a = new person(x);
        a.show();
        if(a.age < 18){
            try {
                throw new IllegalAgeException("Age is less than 18, You can't VOTE!");
            } catch (IllegalAgeException e) {
                //TODO: handle exception
                System.out.println(e);
                System.out.println(e.getMessage());
            }
        }else{
            System.out.println("You can VOTE!");
        }
    }

}
