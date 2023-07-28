package bank;

import java.util.Scanner;

class Main {
    static Scanner s = new Scanner(System.in);
    static int entry() {
        int order;
        System.out.println("--------------------------------------------------");
        System.out.println("1. Create a bank account.");
        System.out.println("2. Remove a bank account.");
        System.out.println("3. Get details of a bank account.");
        System.out.println("4. Get details of a bank and it's employees.");
        System.out.println("5. Add money to a account.");
        System.out.println("6. Get money out from a bank account.");
        System.out.println("7. EXIT");
        System.out.print("What to do? : ");
        order = s.nextInt();
        return order;
    }

    public static void main(String[] args) {
        while (true) {
            int x = entry();
            System.out.println(x);
            if(x==1){
                user u = new user();
                u.name = "pkay";
            }else if(x == 3){
                System.out.println(u.name);
            }

        }

    }
}

class user{
    String name,address,account_number,phone_number,email;
}
