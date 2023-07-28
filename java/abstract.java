package Abstract;

abstract class vehical{

    public abstract int getNoOfWheels();
    public int x(){
        return 5;
    }
}

class car extends vehical{
    public int getNoOfWheels(){
        return 4;
    }   
}
class bus extends vehical{
    public int getNoOfWheels(){
        return 6;
    }   
}

class test{
    public static void main(String[] args) {
        car c = new car();
        System.out.println(c.getNoOfWheels());
        System.out.println(c.x());
        bus b = new bus();
        System.out.println(b.getNoOfWheels());
        System.out.println(b.x());
    }
}
