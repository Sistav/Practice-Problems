import java.util.*;
import java.io.*;

public class App {
    public static void main(String[] args) throws Exception {
        BufferedReader scan = new BufferedReader (new InputStreamReader(System.in));
        ArrayList<String> list =  new ArrayList<String>(0);
        HashMap<Character, Character> hash = new HashMap<Character, Character>(){{
            put('p', 'q');
            put('q', 'p');
            put('d','b');
            put('b','d');
        }};;
        
        while (true) {
            String line = scan.readLine();
            if (line.equals("  ")){
                break;
            }
            char first_char = line.charAt(0);
            if (hash.containsKey(first_char) && line.charAt(1) == hash.get(first_char)){
                list.add("Mirrored pair");
            }
            else{
                list.add("Ordinary pair");
            }
        }
        System.out.println("Ready");
        for (int i = 0; i < list.size(); i++){
            System.out.println(list.get(i));
        }

    }
}
