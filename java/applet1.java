import java.applet.Applet;
import java.awt.*;
public class applett extends Applet{
    /*<applet code="applett.class" width=300 height=300></applet>*/
    public void init()
    {
        System.out.println("1.I am init()");
    }
    public void start()
    {
        System.out.println("2.I am start()");
    }
    public void paint(Graphics g)
    {
        System.out.println("3.I am paint()");
    }
    public void stop()
    {
     System.out.println("4.I am stop()");
    }
    public void destroy()
    {
     System.out.println("5.I am destroy()");
    }
}
