class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector <int> maxRows, maxCols, temp;
        int max = 0, finTotal = 0;

        for(int i = 0; i < grid.size(); i++){
            temp = grid[i];
            sort(temp.begin(),temp.begin()+temp.size(), greater<int>());
            maxRows.push_back(temp[0]);
        }
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[j][i] > max)
                    max = grid[j][i];
            }
            maxCols.push_back(max);
            max = 0;
        }
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                int m = min(maxRows[i],maxCols[j]);
                if(grid[i][j] < m)
                    finTotal += (m - grid[i][j]);
            }
        }
        return finTotal;
        
    }
};