//input 10 no. then find greatest no. implement the concept of exception handling.
package greatest;
import java.io.DataInputStream;
import java.io.IOException;
class Main{
    public static void main(String[] args) {
        int n,i=0;
        DataInputStream x = new DataInputStream(System.in);
        try{
        System.out.println("Enter Size of Array : ");
        n = Integer.parseInt(x.readLine());
        int a[] = new int[n];

        for(i=0;i<a.length;i++){
            System.out.println("Enter Number : ");
            a[i] = Integer.parseInt(x.readLine());
        }
            int gt;
            gt = a[0];
        for(i=0;i<a.length;i++){
                if(a[i] > gt) gt = a[i];
        }
            System.out.println("Greatest Number = " + gt );
        }catch(IOException e) {
            System.out.println(e);
        }catch(NegativeArraySizeException e){
            System.out.println("Array length can't be less than ZERO. EDIOT!!!\n" + e);
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Invalid index value"+e);
        }catch(NumberFormatException e){
            System.out.println("Enter only Number YOU EDIOT!!!\n" + e);
        }catch(Exception e){
            System.out.println(e);
        }finally{
            System.out.println("GO AWAY!!!");
        }

    }
}

