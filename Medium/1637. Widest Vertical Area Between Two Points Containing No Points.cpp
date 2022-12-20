class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.begin()+points.size());
        int optimal = 0;
        for(int i = 0; i < points.size()-1; i++){
            if(points[i+1][0] - points[i][0] > optimal)
                optimal = points[i+1][0] - points[i][0];
        }
        return optimal;
    }
};