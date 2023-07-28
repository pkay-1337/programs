package input;
import java.io.DataInputStream;
import java.io.IOException;
//to input impid , name, post, salary and grade then print it
public class runtime_input{
    public static void main(String[] args) throws IOException{
        Integer empId;
        String name;
        String post;
        Integer salary;
        String grade;
        DataInputStream ds = new DataInputStream(System.in);
        System.out.println("Enter empId, name, post, salary, grade : ");
        empId = Integer.parseInt(ds.readLine());
        name = ds.readLine();
        post = ds.readLine();
        salary = Integer.parseInt(ds.readLine());
        grade = ds.readLine();

        System.out.println("Id = " + empId + "\nname = " + name + "\npost = " + post + "\nsalary = " + salary + "\ngrade = " + grade);
        
    } 
}
