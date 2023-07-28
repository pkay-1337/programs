// for printing each character of your name during one second interval time using RUNAble INTERFACE

package thread;
import java.io.*;
class RunnableInterface implements Runnable{
    String name;
    DataInputStream i = new DataInputStream(System.in);
    RunnableInterface() throws IOException{
        System.out.print("Enter Your Name : ");
        name = i.readLine();
    }
    public void run(){
        try {
            for(int i=0; i<name.length(); i++){
                System.out.println(name.charAt(i));
                Thread.sleep(100);
            }
        } catch(InterruptedException e){
        } catch(StringIndexOutOfBoundsException e){
            System.out.println("LOL");
        } catch (Exception e) {
            //TODO: handle exception
        }
    }
    public static void main(String[] args) throws IOException{
        RunnableInterface x = new RunnableInterface();
        Thread t1 = new Thread(x);
        t1.start();
    }
}
