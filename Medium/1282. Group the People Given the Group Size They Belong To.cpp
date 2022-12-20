class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector <vector<int>> answer;
        vector <int> temp;
        int peoplePutIn = 0, groupNum = 1;
        
        while(peoplePutIn < groupSizes.size()){
            
            for(int i = 0; i < groupSizes.size(); i++){
                if(groupSizes[i] == groupNum){
                    temp.push_back(i);
                    peoplePutIn++;
                    if(temp.size() == groupNum){
                        answer.push_back(temp);
                        temp.clear();
                    }
                }
            }
            groupNum++;
            
        }
        return answer;
    }
};