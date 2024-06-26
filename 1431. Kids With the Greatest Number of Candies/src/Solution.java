class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int max = -1;
        for (int i = 0; i < candies.length; i++){
            if (candies[i] > max){
                max = candies[i];
            }
        }
        List<Boolean> retcandies = new ArrayList<>();
        for (int i = 0; i < candies.length; i++){
            retcandies.add(candies[i] + extraCandies >= max);
        }
        return retcandies;
    }
}