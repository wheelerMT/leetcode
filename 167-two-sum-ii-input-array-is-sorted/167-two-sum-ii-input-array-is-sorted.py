class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        # Use two pointers, one at start one at end
        # Sum together values, and ask: is it larger or smaller than target
        # If smaller, increment the left pointer, if larger, increment the right
        # Continue until sum is found, then return list of indices + 1
        
        start = 0
        end = len(numbers) - 1
        while True:
            summed = numbers[start] + numbers[end]
            
            if summed == target:
                return [start + 1, end + 1]
            elif summed < target:
                start += 1
                continue
            elif summed > target:
                end -= 1