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
        x = x;
    }
    void show(){
        System.out.println(x);
    }
    public static void main(String[] args) {
        ThisTest2 t = new ThisTest2(600);
        t.show();
    }
}
