// write a program in java to create 2 user defined exceptions as named NegativeLengthException and NegativeBreadthException
/* these exceptions must be raised if either length or breadth is negative.
create a class as named rectangle to input length and breadth after that find area and perimeter of rectangle
*/
package rectangleHard;
import java.io.*;
class NegativeLengthException extends Exception{
    NegativeLengthException(String msg){
        super(msg);
    }
}
class NegativeBreadthException extends Exception{
    NegativeBreadthException(String msg){
        super(msg);
    }
}
class rectangle{
    int  length, area, perimeter, breadth;
    rectangle(int a, int b){
        length = a;
        breadth = b;
        area = length*breadth;
        perimeter = 2*(length+breadth);
    }
    void show(){
        System.out.println("Area = " + area );
        System.out.println("Perimeter = " + perimeter );
    }
}
class Main{
    public static void main(String[] args) throws IOException{
        DataInputStream i = new DataInputStream(System.in);
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        try {
            int x,y;
            System.out.print("Enter Length : ");
            x = Integer.parseInt(br.readLine());
            if(x<0) throw new NegativeLengthException("Length can't be less than ZERO!");
            System.out.print("Enter Breadth : ");
            y = Integer.parseInt(br.readLine());
            if(y<0) throw new NegativeBreadthException("Breadth can't be less that ZERO!");
            rectangle r = new rectangle(x,y);
            r.show();
        } catch (NegativeLengthException e){
            System.out.println(e.getMessage());
        } catch (NegativeBreadthException e){
            System.out.println(e.getMessage());
        } catch (Exception e) {
            //TODO: handle exception
        }
        
    }
}
