// Naod Philemon
// 12/28/2022

/* Naive Solution - O(n^2) (Time Limit Exceeded)
    int maxWater = 0;
    for(int i = 0; i < height.size(); i++){
        for(int j = i+1; j < height.size(); j++){
            int temp = (j-i) * min(height[i], height[j]);
            if(temp > maxWater) maxWater = temp;
        }
    }

    return maxWater;
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0, i = 0, j = height.size()-1;
        
        while(i < j){
            int smallest = height[i] < height[j] ? height[i] : height[j];
            max = max < (smallest * (j-i)) ? (smallest * (j-i)) : max;
            smallest == height[i] ? i++ : j--;
        }

        return max;
    }
};