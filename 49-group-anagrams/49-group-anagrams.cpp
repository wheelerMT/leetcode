class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> words {};
        vector<vector<string>> ans {};
        
        for (auto& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            words[sortedStr].push_back(str);
        }
        
        for (auto& word : words) {
            ans.push_back(word.second);
        }
        
        return ans;
    }
};