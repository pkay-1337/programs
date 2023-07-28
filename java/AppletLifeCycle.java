import java.applet.Applet;
import java.awt.Graphics;
public class AppletLifeCycle extends Applet
{
/*<applet code="AppletLifeCycle.class" width=300 height=300></applet>*/
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
g.drawString("Hello, World!", 0, 50);
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
