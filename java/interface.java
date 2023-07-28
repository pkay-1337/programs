package Interface;

interface Bank {
    float rateOfInterest();
}

class SBI implements Bank {
    public float rateOfInterest() {
        return 9.15f;
    }
}

class PNB implements Bank {
    public float rateOfInterest() {
        return 9.7f;
    }
}

class TestInterface {
    public static void main(String[] args) {
        Bank b = new SBI();
        System.out.println("ROI of SBI : " + b.rateOfInterest());
        b = new PNB();
        System.out.println("ROI of PNB: " + b.rateOfInterest());
    } // End of Main()
} // End of Class

// -------------------------------------------------------------------
interface Printable {
    void print();
}

interface Showable {
    void show();
}

class Multiple implements Printable, Showable {
    public void print() {
        System.out.println("Hello");
    }

    public void show() {
        System.out.println("Welcome");
    }

    public static void main(String args[]) {
        Multiple obj = new Multiple();
        obj.print();
        obj.show();
    }
}

// ------------------------------------------------------------

interface Printable2 {
    void print();
}

interface Showable2 extends Printable {
    void show();
}

class TestInterface2 implements Showable2 {
    public void print() {
        System.out.println("Hello");
    }

    public void show() {
        System.out.println("Welcome");
    }

    public static void main(String args[]) {
        TestInterface4 obj = new TestInterface4();
        obj.print();
        obj.show();
    }
}
