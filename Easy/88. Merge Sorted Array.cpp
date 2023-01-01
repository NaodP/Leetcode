// Naod Philemon
// 12/31/2022

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1;
        while(j > -1){
            int k = i+j+1;
            if(i < 0){
                nums1[j] = nums2[j];
                j--;
            }
            else if(nums1[i] > nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }
            else{
                nums1[k] = nums2[j];
                j--;
            }
        }
    }
};