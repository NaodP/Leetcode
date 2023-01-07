# Naod Philemon
# 01/06/2023

class Solution:
    def rob(self, nums: List[int]) -> int:
        # Dynamic Programming
        dp = [[0 for i in range(len(nums)+2)] for j in range(len(nums)+2)]
        
        for i in range(2,len(dp)):
            for j in range(2,len(dp[0])):
                if j-1 < 0: dp[i][j] = dp[i-1][j]   
                else: dp[i][j] = max(dp[i-1][j], dp[i-2][j-1]+nums[i-2])

        return dp[-1][-1]