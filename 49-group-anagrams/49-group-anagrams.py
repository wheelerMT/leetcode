class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # Create dict for sorted versions of strings
        # Loop through strs and sort each value
        # Store elements that when sorted match that element as values
        # Return the values of the dict as a list
        words = {}
        
        for string in strs:
            sorted_str = ''.join(sorted(string))
            if sorted_str in words:
                words[sorted_str].append(string)
                continue
            words[sorted_str] = [string]
        
        return words.values()