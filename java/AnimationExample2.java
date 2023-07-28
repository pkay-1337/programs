import java.awt.*;
import java.applet.*;
public class AnimationExample2 extends Applet {
    /*<applet code="AnimationExample2.class" width=1920 height=480></applet>*/
    Image picture;
    public void init() {

    setForeground(Color.white);
    }
    public void paint(Graphics g) {
        int j = 0;
        //while(j < 5){
            picture =getImage(getDocumentBase(),"run.gif");
            int i = 0;
            for(i=0;i<1570;i++){
                g.drawImage(picture, i,0, this);
            try{
            Thread.sleep(5);
            }
            catch(Exception e){}
            }

            picture =getImage(getDocumentBase(),"run2.gif");
            for(i=1570;i>0;i--){
                g.drawImage(picture, i,0, this);
            try{
            Thread.sleep(5);
            }
            catch(Exception e){}
            }
            j++;
        //}
    }
}
