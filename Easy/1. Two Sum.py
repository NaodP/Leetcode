# Naod Philemon
# 12/22/2022

class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seen = set()

        for num in nums:
            if num in seen:
                return [num, target-num]
            seen.add(target-num)

        return [-1]