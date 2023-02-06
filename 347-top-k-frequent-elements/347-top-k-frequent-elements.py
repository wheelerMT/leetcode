class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # Create empty dictionary to store seen numbers
        # Loop through nums, for element we:
        # Check if number is in dict, if it is, increment the count
        # If it isn't add it to the dict
        # Return sorted(dict.keys())[:k]
        
        seen = {}
        for num in nums:
            if num in seen:
                seen[num] += 1
            else:
                seen[num] = 1
        
        return sorted(seen.keys(), key=lambda x: seen[x], reverse=True)[:k]