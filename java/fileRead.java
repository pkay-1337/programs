package file;
import java.io.FileInputStream;
import java.io.FileReader;
import java.io.IOException;

class FileInputStreamDemo {
  public static void main(String[] args) throws IOException {
    int i;
    char c;
    FileInputStream f = new FileInputStream("./Files/Country.java");
    i = f.read();
    while (i != -1) {
      c = (char)i;
      System.out.print(c);
      i = f.read();
    }
  }
}

class FileReaderDemo {
  public static void main(String[] args) throws IOException {
    char[] c = new char[100];
    FileReader f = new FileReader("./Files/in");
    f.read(c);
    for (char x : c) {
      System.out.print(x);
    }
  }
}

