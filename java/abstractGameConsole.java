package Abstract;
abstract class GameConsole {
    int score = 5;

    void displayScore() {
        System.out.println("The displayScore method = "+ score );
    }

    abstract void computeScore();

    abstract void playGame();
}

class Badminton extends GameConsole {
    void playGame() {
        System.out.println("Starting the Badminton Game...");
    }

    void computeScore(){
        System.out.println("Implementing the abstract method of the Gameconsole class.");
    }
}

class GameDemo {
    public static void main(String args[]) {
        Badminton obj1 = new Badminton();
        obj1.playGame();
        obj1.computeScore();
        obj1.displayScore();
    }
}
