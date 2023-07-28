package Abstract;

abstract class Loan{
    public abstract double getIntrestRate();
} 

class HomeLoan extends Loan{
    public double getIntrestRate(){
        return 8.5;
    }
}
class GoldLoan extends Loan{
    public double getIntrestRate(){
        return 10.5;
    }
}

class loan{
    public static void main(String[] args) {
        GoldLoan g = new GoldLoan();
        HomeLoan h = new HomeLoan();
        System.out.println(g.getIntrestRate());
        System.out.println(h.getIntrestRate());


    }
}
