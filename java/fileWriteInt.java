package file;
import java.io.*;

class fileInt{
    public static void main(String[] args) throws IOException {
        FileWriter fw = new FileWriter("./Files/out");
        int []z = {1000};
        for (int x : z) {
            if(x != '\0') {
                fw.write(x);
            }
        }
        fw.close();
    }
}


