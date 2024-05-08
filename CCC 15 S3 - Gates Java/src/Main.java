import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int G = scan.nextInt();
        TreeSet<Integer> gates = new TreeSet<>();
        for (int i = 1; i < G + 1; i++) {
            gates.add(i);
        }
        int N = scan.nextInt();
        int count = 0;

        for (int i = 0; i < N; i++){
            int j = scan.nextInt();
            try{
                gates.remove(gates.floor(j));
                count++;
            }catch(NullPointerException e){
                scan.close();
                break;
            }
                
            
            
        }
        System.out.println(count);
    }
}