import java.util.Scanner;
public class App {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int s = scan.nextInt();
        int c = scan.nextInt();
        if ((s*s)>(3.14 * c * c) ){
            System.out.println("SQUARE");
        }
        else{
            System.out.println("CIRCLE");
        }
    }
}
