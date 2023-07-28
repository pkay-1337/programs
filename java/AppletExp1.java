// This is a Simple Java Applet
// program using appletviewer

import java.applet.*;
import java.awt.*;

/*
<applet code="AppletExp1" width=500 height=500>
</applet>
*/

public class AppletExp1 extends Applet {
	public void init()
	{
		setBackground(Color.black);
		setForeground(Color.white);
		System.out.println("Initializing an applet");
	}

	public void start()
	{
		System.out.println("Starting an applet");
	}
	public void paint(Graphics g)
	{
		Color c=new Color(0,0,255);
		g.setColor(c);
		Font f=new Font("Comic Sans MS",3,40);
		g.setFont(f);
		g.drawString("This is testing",40,50);
		System.out.println("Starting an Paint()");
		g.drawRect(40,70,100,40);
		g.fillRect(40,120,100,40);
		Color c1=new Color(0,255,0);
		g.setColor(c1);
		g.drawOval(40,170,30,60);
		g.fillOval(40,170,30,60);
		c1=new Color(255,0,0);
		g.setColor(c1);
		g.drawLine(40,240,140,240);
		g.drawArc(40,260,60,100,60,60);
		
		int x[]={300,250,280,290,200};
		int y[]={60,200,300,400,500};
		g.drawPolygon(x,y,5);
	}
	public void stop()

	{
		System.out.println("Stopping an applet");
	}
	public void destroy()

	{
		System.out.println("Destroying an applet");
	}
}
