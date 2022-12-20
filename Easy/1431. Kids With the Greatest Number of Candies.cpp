class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;
        vector <bool> greatest;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] > max)
                max = candies[i];
        }
        
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= max)
                greatest.push_back(true);
            else
                greatest.push_back(false);
        }
        
        return greatest;
    }
};