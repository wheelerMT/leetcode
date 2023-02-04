class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # Strings have to be same length to be an anagram, perform check
        # Sort the strings and check if elements are the same
        
        if len(s) != len(t):
            return False
        return sorted(s) == sorted(t)