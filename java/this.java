package inherit;

class ThisTest{
    void show(){
        System.out.println(this);
    }
    public static void main(String[] args) {
        ThisTest t = new ThisTest();
        System.out.println(t);
        t.show();
    }
}

class ThisTest2{
    int x = 500;
    ThisTest2(int x){
        this.x = x;
    }
    void show(){
        System.out.println(x);
    }
    public static void main(String[] args) {
        ThisTest2 t = new ThisTest2(600);
        t.show();
    }
}

class ThisTest3{
    ThisTest3(){
        //this(5);
        System.out.println("In default constructor");
        //this(50);
    }
    ThisTest3(int x){
        this();
        System.out.println("In Parameterised constructor");
    }
    public static void main(String[] args) {
        ThisTest3 t = new ThisTest3(5);
        //ThisTest3 t2 = new ThisTest3(5);

    }
}

class Vehicle {
    int max_speed = 210;

    Vehicle(int max_speed) {
        this.max_speed = max_speed;
    }

    public void showmaxspeed() {
        System.out.println("The top speed is " + max_speed);
    }
}

class This{
    public static void main(String args[]) {
        Vehicle a = new Vehicle(250);
        a.showmaxspeed();
    }
}
