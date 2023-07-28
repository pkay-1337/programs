package Country;
class Country {
// Static variable
    static int countryCounter;
    String name;
    int dummyCounter;
    Country(){
        countryCounter++;
    }
    public static void main(String[] args) {
        // Creating first instance
        Country ob1 = new Country();
        // Assigning values to object's data variables.
        ob1.name = "India";
        ob1.dummyCounter = 1;
        // Creating second instance of the class
        Country ob2 = new Country();
        ob2.name = "france";
        ob2.dummyCounter = 1;

        //ob2.countryCounter = 10;

        System.out.println("ob1.countryCounter = " + ob1.countryCounter);
        System.out.println("ob1.dummyCounter = " + ob1.dummyCounter);
        System.out.println("ob2.countryCounter = " + ob2.countryCounter);
        System.out.println("ob2.dummyCounter = " + ob2.dummyCounter);
        System.out.println("Country.countryCounter = " + Country.countryCounter);
    }
}
