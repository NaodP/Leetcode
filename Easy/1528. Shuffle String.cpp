class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string fin;
        for(int i = 0; i < s.length(); i++){
            fin += "0";
        }
        for(int i = 0; i < s.length(); i++){
            fin[indices[i]] = s[i];
        }
        
        return fin;
    }
};