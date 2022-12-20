class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int tot = 0;
        for(int i = 0; i < jewels.length(); i++){
            for(int j = 0; j < stones.length(); j++){
                if(jewels[i] == stones[j]){
                    stones.erase(stones.begin()+j);
                    j--;
                    tot++;
                }
            }
        }
        return tot;
    }
};