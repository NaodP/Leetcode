class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.begin()+nums.size(), greater<int>());
        int max = 0;
        for(int i = 0; i < nums.size()/2; i++){
            if(nums[i] + nums[nums.size()-(i+1)] > max)
                max = nums[i] + nums[nums.size()-(i+1)];
        }
        return max;
    }
};