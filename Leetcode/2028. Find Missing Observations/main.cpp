#include <vector>

class Solution {
public:
    std::vector<int> missingRolls(std::vector<int>& rolls, int mean, int n) {
        std::vector<int> retVec;
        int sum = 0;
        int fullsum1 = mean * (n + rolls.size());
        
        for(auto itr : rolls){
            sum += itr;
        }
        
        if (fullsum1 - sum > n * 6){
            return retVec;
        } else if (fullsum1 - sum < n){
            return retVec;
        } else {
            int diff = fullsum1 - sum;
            int q = diff / n;
            int rem = diff % n;
            
            for (int i = 0; i < n; i++) {
                if (rem > 0) {
                    retVec.push_back(q + 1);
                    rem--;
                } else {
                    retVec.push_back(q);
                }
            }
            return retVec;
        }
    }
};