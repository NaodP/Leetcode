class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        
        for(int i = 0; i < operations.size(); i++){
            if(strstr(operations[i].c_str(),"+"))
               x++;
            else
               x--;
        }
        return x;
    }
};