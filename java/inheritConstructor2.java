package inherit;

class Base{
    Base(){
        System.out.println("In base no parameter");
    }
    Base(int x){
        System.out.println("Base Class : " + x);
    }
    Base(int x, int y){
        System.out.println("Base Class : " + (x+y));
    }
}

class Derived extends Base{
    Derived(int x){
        super(x,5);
        System.out.println("Derived Class");
    }
}

class Constructor2{
    public static void main(String[] args) {
        Derived d = new Derived(12);
        //Base b = new Base(10);
    }



}



