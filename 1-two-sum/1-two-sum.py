class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # Use dict to keep track of seen numbers
        # Loop through elements of nums
        # Check to see if target - current number is in dict
        # If so, return indices
        # At end of loop return false
        
        seen = {}
        for i, num in enumerate(nums):
            if target - num in seen:
                return [seen[target-num], i]
            seen[num] = i
            