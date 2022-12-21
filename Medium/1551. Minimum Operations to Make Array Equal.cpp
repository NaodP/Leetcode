class Solution {
public:
    int minOperations(int n) {
        int arr[n], ind = 0, tot = 0;
        for(int i = 0; i < n; i++){
            arr[i] = (2 * i) + 1;
        }
        while(arr[ind] < n){
            tot += n - arr[ind];
            ind++;
        }
        return tot;
    }
};