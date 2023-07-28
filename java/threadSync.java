package thread;

class WishingMsg{
    synchronized void wish(String name){
        try {
            for (int i = 1; i <= 5; i++) {
                System.out.println("Good Morning " + name );
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            // TODO: handle exception
        }
    }
}
class MyThread extends Thread{
    String name;
    WishingMsg msg;
    MyThread(WishingMsg msg, String nm){
        this.msg = msg;
        name = nm;
    }
    public void run(){
        msg.wish(name);
    }
}

class ThreadRun{
    public static void main(String[] args) {
        WishingMsg m = new WishingMsg();
        MyThread t1 = new MyThread(m,"Pkay");
        MyThread t2 = new MyThread(m,"Dhoni");
        MyThread t3 = new MyThread(m,"Virat");
        t1.start();
        t2.start();
        t3.start();
    }
}
