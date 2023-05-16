class Solution {
public:
    bool isPalindrome(string s) {
        // Convert to lowercase
        // Remove non-alphanumeric
        // Have two pointers, one at either end, and compare
        // each value at the pointer location to see if they match
        // If they don't, return false, else true
        
        auto it = std::remove_if(s.begin(), s.end(), [](char const &c) {
            return !std::isalnum(c);
        });
        s.erase(it, s.end());
        std::transform(s.begin(), s.end(), s.begin(),
        [](unsigned char c){ return std::tolower(c); });
        
        if (s == "") return true;
        
        int start = 0;
        int end = s.length() - 1;
        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }
            ++start;
            --end;
        }
        
        return true;
    }
};