import java.applet.*;
import java.awt.*;
public class AppletExp2 extends Applet
{
/*<applet code="AppletExp2" width=500 height=500></applet>*/

    public void AppletExp2(){
        System.out.println("Constructor Running...");
    }
    public void init()
    {
        System.out.println("1.I am init()");
        setBackground(Color.red);
        setForeground(Color.white);
    }
    public void start()
    {
        System.out.println("2.I am start()");
    }
    public void paint(Graphics g)
    {
        g.drawString("This is testing",40,50);
        System.out.println("Starting an Paint()");
        g.drawRect(40,70,100,40);
        g.fillRect(40,120,100,40);
        g.drawOval(40,170,30,60);
        //g.fillOval(40,170,30,60);
        g.drawLine(40,240,140,240);
        g.drawArc(40,260,60,100,60,60);
        int x[]={300,150,480,290,200};
        int y[]={60,200,300,300,500};
        g.drawPolygon(x,y,5);
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
