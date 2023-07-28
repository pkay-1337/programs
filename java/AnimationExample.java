import java.awt.*;
import java.applet.*;
public class AnimationExample extends Applet {
    /*<applet code="AnimationExample.class" width=740 height=700></applet>*/
    Image picture;
    public void init() {

    setForeground(Color.white);
    }
    public void paint(Graphics g) {
        int j = 0;
        while(j < 5){
            picture =getImage(getDocumentBase(),"bike.jpg");
            int i = 0;
            for(i=0;i<500;i++){
                g.drawImage(picture, i,0, this);
            try{
            Thread.sleep(10);
            }
            catch(Exception e){}
            }

            picture =getImage(getDocumentBase(),"bike2.jpeg");
            for(i=500;i>0;i--){
                g.drawImage(picture, i,0, this);
            try{
            Thread.sleep(10);
            }
            catch(Exception e){}
            }
            j++;
        }
    }
}
