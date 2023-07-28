package thread;

class ThreadOne extends Thread {
    public void run() {
        try {
            for (char ch = 'A'; ch <= 'E'; ch++) {
                System.out.println(ch);
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            // TODO: handle exception
        }
    }
}

class ThreadTwo extends Thread {
    public void run() {
        try {
            for (char ch = 'a'; ch <= 'f'; ch++) {
                System.out.println(ch);
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            // TODO: handle exception
        }
    }
}

class ThreadThree extends Thread {
    public void run() {
        try {
            for (int i = 1; i < 5; i++) {
                System.out.println(i);
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            // TODO: handle exception
        }
    }
}

class multipleThread {
    public static void main(String[] args) {
        ThreadOne t1 = new ThreadOne();
        ThreadTwo t2 = new ThreadTwo();
        ThreadThree t3 = new ThreadThree();
        /*
         * All Together
         * t1.start();
         * t2.start();
         * t3.start();
         */
        /*
         * One By One
         * t3.run();
         * t2.run();
         * t1.run();
         */
        System.out.println("Name of main thread : " + Thread.currentThread());
        System.out.println("Name of main thread : " + Thread.currentThread().getName());
        System.out.println("Priority of main thread : " + Thread.currentThread().getPriority());
        System.out.println("Def name of threadOne : " + t1.getName());
        System.out.println("Def name of threadtwo : " + t2.getName());
        System.out.println("Def name of threadThree : " + t3.getName());
        t1.setName("Dhoni");
        t2.setName("Rohit");
        t3.setName("Virat");
        System.out.println("New name of threadOne : " + t1.getName());
        System.out.println("New name of threadtwo : " + t2.getName());
        System.out.println("New name of threadThree : " + t3.getName());

        System.out.println("Def Priority of threadOne : " + t1.getPriority());
        System.out.println("Def Priority of threadtwo : " + t2.getPriority());
        System.out.println("Def Priority of threadThree : " + t3.getPriority());
        t1.setPriority(Thread.MAX_PRIORITY);
        t2.setPriority(8);
        t3.setPriority(3);
        System.out.println("New Priority of threadOne : " + t1.getPriority());
        System.out.println("New Priority of threadtwo : " + t2.getPriority());
        System.out.println("New Priority of threadThree : " + t3.getPriority());

        System.out.println("Current State of ThreadOne : " + t1.getState());
        try {
            t1.setPriority(1); // Generates Exception As IllegalArgumentException
            t1.start();
            t1.start();
        } catch (IllegalThreadStateException e){
            System.out.println("Same thread is running twice"); 
        } catch (IllegalArgumentException e){
            System.out.println("Invalid Priority"); 
        } catch (Exception e) {
            System.out.println(e.getMessage());
            //TODO: handle exception
        }
    }
}
