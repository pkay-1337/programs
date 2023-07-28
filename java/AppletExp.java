import java.applet.*;
import java.awt.*;
public class AppletExp extends Applet
{
/*<applet code="AppletExp" width=500 height=500></applet>*/

    public void AppletExp(){
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
        System.out.println("3.I am paint()");
        g.drawString("Hello, World!", 400, 50);
        g.drawRect(100,100,100,200);
        g.fillRect(40,120,100,40);
        g.drawLine(90,90,145,145);
        g.drawLine(80,180,220,180);
        g.drawArc(80,180,100,50,30,60);
        g.drawArc(40,260,60,100,60,60);
        g.drawOval(40,170,30,60);
        g.fillOval(40,170,30,60);

        int x[]={300,250,280,290,200};
        int y[]={60,200,300,400,500};
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
