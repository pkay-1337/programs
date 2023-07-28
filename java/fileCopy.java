package file;
import java.io.*;

class fileCopy {
    public static void main(String[] args) throws IOException {
        FileReader fr = new FileReader("./Files/in");
        FileWriter fw = new FileWriter("./Files/out");
        /*
        void writeNum(int num){


        }
        */
        int []z = {1000};
        char[] c = new char[1000];
        fr.read(c);
        for (int x : z) {
            if(x != '\0') {
                fw.write(x);
            }
        }
        fr.close();
        fw.close();
    }
}


