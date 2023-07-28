//Wap in java to create a thread for printing table of any number during one second interval time using Thread Class.

package thread;
import java.util.*;
class SingleThread extends Thread{
    int n;
    Scanner s = new Scanner(System.in);
    SingleThread(){
        System.out.print("Enter any number : ");
        n = s.nextInt();
    }
    public void run(){
        try {
            int i = 1;
            while(i<11){
                System.out.println(n + " x " + i + " = " + (n*i));
                Thread.sleep(100);
                i++;
            }
        } catch(InterruptedException e){

        } catch (Exception e) {
            //TODO: handle exception
        }
    }
    public static void main(String[] args) {
        SingleThread t1 = new SingleThread();
        t1.start();
    }
}
