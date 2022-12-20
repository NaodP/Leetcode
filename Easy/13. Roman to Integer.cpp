class Solution {
public:
    int romanToInt(string s){
        map <char,int> values; 
        values['I'] = 1;
        values['V'] = 5;
        values['X'] = 10;
        values['L'] = 50;
        values['C'] = 100;
        values['D'] = 500;
        values['M'] = 1000;
        
        int max = 1000, total = 0;
        char before;
        
        for(int i = 0; i < s.length(); i++){
            if(values[s[i]] <= max){
                total += values[s[i]];
                max = values[s[i]];
                before = s[i];
            }
            else{
                total -= (2*values[before]);
                total += values[s[i]];
            }
        }
        return total;
    }
};