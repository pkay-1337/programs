package Abstract;
abstract class test{
    abstract void get();
}
class derived extends test{
    void put(){
        System.out.println("Hello");
    }
    void get(){
        System.out.println("Hi");
    }
}

class Main{
    public static void main(String[] args) {
        derived d = new derived();
        d.put();
        d.get();
    }
}
