public class mainOverload {
    static String []str = new String[1];
    //static int x;
    public static void main(String[] args) {
        System.out.println("Original main");
        //x = 5;
        //System.out.println("x = "+ x);
        //test();
        //main();
        main(str);
    }
    /*
    static void main(){
        System.out.println("main test no parameter");
    }
    private static void test(){
        main();
    }
    */
}
/*
class test{
    static String []str = new String[1];
    public static void main(String[] args) {
        mainOverload.main();
    }
}
*/
