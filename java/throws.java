//to input you name after that print each character in reverse order during on esecond intervals.
//implement throws keyword 
package reverse;
import java.io.*; 
class Main{
    public static void main(String[] args) throws InterruptedException, IOException{
        String name;
        int j;
        DataInputStream i = new DataInputStream(System.in);
        try {
            System.out.print("Enter your name : ");
            name = i.readLine();
            System.out.println(name);
            try {
                System.out.println("Characters in name are : ");
                for(j=name.length()-1; j>=0; j--){
                    System.out.println(name.charAt(j));
                    Thread.sleep(1000);
                }
            } catch(StringIndexOutOfBoundsException e){
                System.out.println(e);
            } catch(Exception e){

            }
        }catch(NullPointerException e){
            System.out.println("String is Null");
        }catch(Exception e){
            System.out.println(e);
        }
    }
}
