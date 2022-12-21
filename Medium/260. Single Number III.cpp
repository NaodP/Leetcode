class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector <int> real;
        set <int> check;
        set<int>::iterator it;
        for(int i = 0; i < nums.size(); i++){
            if(check.find(nums[i]) == check.end())
                check.insert(nums[i]);
            else
                check.erase(nums[i]);
        }
        it = check.begin();
        while(it != check.end()){
            real.push_back(*it);
            ++it;
        }
        return real;
    }
};