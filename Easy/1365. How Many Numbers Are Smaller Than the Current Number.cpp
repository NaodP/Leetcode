class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int tot = 0;
        vector <int> fin;
        vector <int> check = nums;
        sort(check.begin(), check.begin()+check.size());
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] > check[j])
                    tot++;
                else 
                    break;
            }
            fin.push_back(tot);
            tot = 0;
        }
        return fin;
    }
};