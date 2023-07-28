package inherit;

class base{
    base(int x){
        System.out.println("In base " + x);
    }
}
class derived extends base{
    derived(){
       // super(5);
        System.out.println("In derived");
    }
}
class derived2 extends derived{
    derived2(){
        System.out.println("In derived2 ");
    }
}
class derived3 extends derived2{
    derived3(){
        System.out.println("In derived3 " );
        
    }
}
class Constructor{
    public static void main(String[] args) {
        derived3 d = new derived3();
    }
}

