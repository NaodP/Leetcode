// Naod Philemon
// 01/01/2023

class Solution {
public:
    bool isHappy(int n) {
        set<int> seen;

        while(n != 1){
            if(seen.find(n) != seen.end()) return false;
            seen.insert(n);
            int tempInt = 0;
            while(n > 0){
                tempInt += pow(n%10,2);
                n /= 10;
            }
            n = tempInt;
        }

        return true;
    }
};