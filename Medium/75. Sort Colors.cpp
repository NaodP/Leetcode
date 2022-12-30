// Naod Philemon
// 12/30/2022

class Solution {
public:
    /* SOLUTION 1 | Time O(n+something) | Space O(1) */
    void sortColors(vector<int>& nums){
        int count = 0;
        for(int i = 0; i+count < nums.size(); i++){
            int value = nums[i];
            if(value != 1){
                nums.erase(nums.begin()+i);
                if(value == 0) nums.insert(nums.begin(),0);
                else{
                    nums.push_back(2);
                    i--;
                    count++;
                }
            }
        }
    }

    /* SOLUTION 2 | Time O(n) | Space O(1) */
    void sortColors(vector<int>& nums){
        int zero = 0, one = 0, two = 0;
        for(int i = 0; i < nums.size(); i++){
            switch(nums[i]){
                case 0: zero++; break;
                case 1: one++; break;
                case 2: two++; break;
            }
        }

        for(int i = 0; i < nums.size(); i++){
            if(--zero > 0) nums[i] = 0;
            else if(--one > 0) nums[i] = 1;
            else nums[i] = 2;
        }
    }
};