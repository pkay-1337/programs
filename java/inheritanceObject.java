package inherit;

class Person {
    public void showDetails() {
        System.out.println("In the Person class");
    }
}
class x{
    public static void main(String[] args) {
        Object o;
        o = new Person();
        o.showDetails();
    }
}
