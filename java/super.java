package inherit;

// Default constructor
class P{
    P(){
        super();
    }
}
class C extends P{
    C(){
        super();
    }

}

// Implicit default constructor demo
class P1{
    P1(){
        super();
        System.out.println("In Parent");
    }
}

class C1 extends P1{
    public static void main(String[] args) {
        C1 c = new C1();
    }
}

// Parameterised oarent constructor
class P2{
    P2(){

    }
    P2(int x){
        super();
        System.out.println("In Parent " + x);
    }
}

class C2 extends P2{
    C2(){
        super(20);
        //this();
        System.out.println("Child");
    }
    public static void main(String[] args) {
        //super(50);
        C2 c = new C2();
    }
}
/*class M
{
    int i;
 
    public M(int i)
    {
        this.i = 50;
    }
}
 
class N extends M
{
    public N(int i)
    {
        super(++i);
 
        System.out.println(i);
        System.out.println(this.i);
        System.out.println(super.i);
    }
}
 
class MainClass
{
    public static void main(String[] args)
    {
        N n = new N(26);
    }
}
*/
class M {
    int i = 50 ;
    M(int j){
        this.i =j;
    }
}

class N extends M{
    int i = 100;
    N(int j){
        super(j);
        System.out.println(j);
        System.out.println(super.i);
        System.out.println(this.i);
    }
}

class MainClass{
    public static void main (String []args){
        N n = new N(26);
    }
}





