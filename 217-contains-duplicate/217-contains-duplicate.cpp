class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> currentValues {};
        for (auto& num : nums)
        {
            if (currentValues.find(num) != currentValues.end()) return true;
            currentValues[num] = 0;
        }
        
        return false;
    }
};