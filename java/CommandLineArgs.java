package command_line_arguments;

public class CommandLineArgs {
    public static void main(String[] args) {
        if(args.length == 0){
            System.out.println("Gimme input you :(");
        }else {
/*        for (int i = 0; i < args.length; i++) {
            System.out.println(args[i]);
        }
        for (String var : args) {
            System.out.println(var);
        } */
            System.out.println(Integer.parseInt(args[0]) + Integer.parseInt(args[1]));
        }
    }
}
