public class Class {
  public static void main(String[] args) {
    System.out.println(args[0]);
    //Test a = new Test();
    //a.main();
    Test.main();
  }
}

class Test{
  public static void main() { // Static methods can be accessed without an object
    System.out.println("Main 2 test");
  }
  
}
