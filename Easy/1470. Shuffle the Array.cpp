class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> returning;
        int c = nums.size()/2;
        for(int i = 0; i < nums.size()/2; i++){
            returning.push_back(nums[i]);
            returning.push_back(nums[c]);
            c++;
        }
        return returning;
    }
};