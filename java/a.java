package pack;
import java.io.*;
class Login
{
    String unm,pnm;
    DataInputStream ds = new DataInputStream(System.in);
    Login() throws IOException
    {
        System.out.println("Enter User name ");
        unm=ds.readLine();
        System.out.println("Enter Password");
        pnm=ds.readLine();
    }
    public void validateLogin() throws InterruptedException
    {
        System.out.println("Login Validating.................");
        Thread.sleep(3000);
        if(unm.equals("cimage")==true && pnm.equals("aku")==true)
            System.out.println("Login Success");
        else if(unm.equals("cimage")==false && pnm.equals("aku")==false)
            System.out.println("Login failed due to both are invalid.");
        else if(unm.equals("cimage")==false)
            System.out.println("Login falid due to invalid user name");
        else
            System.out.println("Login failed due to invalid password");
    }
}
class LoginDemo
{
    public static void main(String args[]) throws IOException,InterruptedException
    {
        Login obj = new Login();
        obj.validateLogin();
    }
}
