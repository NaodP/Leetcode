class Solution {
public:
    vector<int> minOperations(string boxes) {
        int tot = 0;
        vector <int> fin;
        for(int i = 0; i < boxes.length(); i++){
            for(int j = 0; j < boxes.length(); j++){
                if(i == j)
                    continue;
                else if(boxes[j] == '1')
                    tot += abs(j-i);
            }
            fin.push_back(tot);
            tot = 0;
        }
        return fin;
    }
};