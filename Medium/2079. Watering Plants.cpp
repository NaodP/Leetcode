class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int can = capacity;
        int n = plants.size();
        int moves = n;
        
        for(int i = 0; i < n; ++i){
            if(plants[i] > can){
                moves += (i * 2);
                can = capacity;
            }
            can -= plants[i];
        }
        
        return moves;
    }
};