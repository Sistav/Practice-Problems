import java.util.HashMap;
class Solution {
    public int getLucky(String s, int k) {
        /* AXE THIS
        Map<Character, Integer> alphabetMap = new HashMap<>();
        for (char ch = 'a'; ch <= 'z'; ch++) {
            alphabetMap.put(ch, ch - 'a' + 1);
        }
        */

        String new_s = "";
        for (char ch: s.toCharArray()) {
            new_s += Integer.toString(/* add this and axe the map shit*/ (ch - 'a' + 1)/*alphabetMap.get(ch)*/);

        }
        int sum = 0;

        for (int i = 0; i < k; i++){
            sum = 0;
            for (char ch: new_s.toCharArray()) {
                sum += Character.getNumericValue(ch);
            }
            new_s = Integer.toString(sum);
        }
        return sum;
    }

}