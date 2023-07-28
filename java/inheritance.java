package inherit;

class Books {
    int page_num;
    String authorname, name;
    float price;

    public Books() {
        page_num = 50;
        authorname = "Andrew Jones";
        name = "The Living Ideas";
        price = 15.78f;
    }

    public void displayInfo() {
        System.out.println("The name of the book is " + name);
        System.out.println("The price of the book is " + price);
        System.out.println("The author name is " + authorname);
        System.out.println("The total number of pages is " + page_num);
    }
}

class PaperBooks extends Books {
    int shippingcharges = 10;

    public void printInfo() {
        displayInfo();// Calling the method of Book class.
        System.out.println("The total shipping charges are" +
                shippingcharges);
    }

    public static void main(String[] args) {
        PaperBooks pb = new PaperBooks();
        pb.printInfo();
    }
} // End of class
  // Book and PaperBooks are related

class Person {
    public void showDetails() {
        System.out.println("In the Person class");
    }
}

class Employee extends Person {
    public void showDetails() {
        System.out.println("In the Employee class");
    }
}

class Student extends Person {
    public void showDetails() {
        System.out.println("In the Student class");
    }
}

class Method_Override {
    public static void show(Person o){
        o.showDetails();
    }
    public static void main(String []args) {
        Person P = new Person();
        Employee E = new Employee();
        Student S = new Student();
        Person ref;
        // Student x;
        // x = P;  Does Not Work
        Object x;
        x = P;
        x.showDetails();
        ref = P;
        show(ref);
        //ref.showDetails(); // calls the showDetails method of the
        // Person class
        ref = E;
        show(ref);
        //ref.showDetails(); // calls the showDetails method of the
        // Employee class
        ref = S;
        show(ref);
        //ref.showDetails();// calls the showDetails method of the
        // Student class
    } // end of main()
} // end of class
