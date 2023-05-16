class Solution:
    def isPalindrome(self, s: str) -> bool:
        # Remove non-alphanumeric chars
        # Use two pointers to match cases at each end of the str
        
        s = (''.join(ch for ch in s if ch.isalnum())).lower()
        
        start = 0
        end = len(s) - 1
        while start < end:
            if s[start] != s[end]:
                return False;
            start += 1
            end -= 1
        
        return True