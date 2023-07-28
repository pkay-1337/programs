// create a class as named login to input user name and password using constructor after that validate username.
// the given un and pass are Cimage and Aku respectively

package login;
import java.io.*; 
class login{
    String un,pass;
    DataInputStream i = new DataInputStream(System.in);
    login() throws IOException{
        System.out.print("Enter UserName : ");
        un = i.readLine();
        System.out.print("Enter Password : ");
        pass = i.readLine();
    }
    void validate() throws InterruptedException{
        Thread.sleep(3000);
        String uname = "cimage";
        String password = "aku";
        if((un.equals(uname) == true) && (pass.equals(password) == true)){
            System.out.println("Login Success!");
        } else if(un.equals(uname) == false && pass.equals(password) == false){
            System.out.println("Un and pass wrong");
        } else if(un.equals(uname) == false){
            System.out.println("uname false");
        }else if(pass.equals(password) == false){
            System.out.println("pass wrong");
        }
    }    
    public static void main(String[] args) throws IOException, InterruptedException{
        login obj = new login();
        obj.validate();
    }
}
