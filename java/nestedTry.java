//WAP in java to input your name after that print each character in new line during 1 sec interval time.
// implement nested try block

package nestedTry;
import java.io.*; 
class Main{
    public static void main(String[] args) {
        String name;
        int j;
        DataInputStream i = new DataInputStream(System.in);
        try {
            System.out.print("Enter your name : ");
            name = i.readLine();
            System.out.println(name);
            try {
                System.out.println("Characters in name are : ");
                for(j=0; j<name.length(); j++){
                    System.out.println(name.charAt(j));
                    Thread.sleep(1000);
                }
            } catch(InterruptedException e){

            } catch(StringIndexOutOfBoundsException e){
                System.out.println(e);
            } catch(Exception e){

            }
        }catch(IOException test){
            System.out.println(test);
        }catch(NullPointerException e){
            System.out.println("String is Null");
        }catch(Exception e){
            System.out.println(e);
        }
    }
}
