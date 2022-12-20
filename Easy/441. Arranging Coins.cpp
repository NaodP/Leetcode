class Solution {
public:
    int arrangeCoins(int n){
        int count = 1, rows = 0;
        while(1){
            n -= count;
            if(n < 0)
                break;
            else
                rows++;
            count++;
        }
        return rows;
    }
};