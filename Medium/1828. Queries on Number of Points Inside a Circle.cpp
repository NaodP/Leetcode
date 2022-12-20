class Solution {
public:
    double dist(int x, int y, int x1, int y1){
        return sqrt(pow(x-x1,2) + pow(y-y1,2));
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector <int> pointsInCircle;
        int tot = 0;
        for(int i = 0; i < queries.size(); i++){
            for(int j = 0; j < points.size(); j++){
                if(dist(points[j][0], points[j][1], queries[i][0], queries[i][1]) <= queries[i][2]){
                    tot++;
                }
            }
            pointsInCircle.push_back(tot);
            tot = 0;
        }
        return pointsInCircle;
    }
};