package file;
import java.io.*;





class FileOutputStreamDemo {
  public static void main(String[] args) throws IOException{
    boolean bool;
    long pos;
    DataInputStream ds = new DataInputStream(System.in);
    System.out.print("Enter Message : ");
    String s = ds.readLine() + "\n";
    //String s = "This is a FileOutputStream Program aaaaa\n";
    byte buf[] = s.getBytes();
    try (FileOutputStream fos = new FileOutputStream("./Files/out",true)) {
      for (int i = 0; i < buf.length; i++) {
        fos.write(buf[i]);
      }
    } catch (Exception e) {
      System.out.println(e);
    }
  } // end of main()
}









class FileOutputStreamDemo2 {
  public static void main(String[] args) {
    boolean bool;
    long pos;
    String s = "This is a FileOutputStream Program aaaaa\n";
    byte buf[] = s.getBytes();
    try {
      FileOutputStream fos = new FileOutputStream("./Files/out",true);
      for (int i = 0; i < buf.length; i++) {
        fos.write(buf[i]);
      }
    } catch (Exception e) {
      System.out.println(e);
    }
  } // end of main()
}











class FileOutputStreamDemo3 {
    public static void main(String[] args) throws IOException, FileNotFoundException {
        boolean bool;
        long pos;
        String s = "This is a FileOutputStream Program aaaaa\n";
        byte buf[] = s.getBytes();
        FileOutputStream fos = new FileOutputStream("./Files/out",true);
        for (int i = 0; i < buf.length; i++) {
            fos.write(buf[i]);
        }
    } 
} // end of main()





class FileWriterDemo{
    public static void main(String args[]){
        try (FileWriter f = new FileWriter("./Files/out")){
            String source = "This is FileWriter Program\n";
            char buffer[] = new char[source.length()];
            source.getChars(0, source.length(), buffer, 0);
            System.out.println(buffer);
            f.write(buffer);
        } catch (IOException e){
            System.out.println(e);
        }
    }
}
