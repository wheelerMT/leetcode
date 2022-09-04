class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> ans;
        
        // Loop through input array
        for (int i = 0; i < nums.size(); ++i)
        {
            int diff = target - nums[i];
            
            if (map.find(diff) != map.end())
            {
                ans.push_back(map[diff]);
                ans.push_back(i);
                return ans;
            }
            else
            {
                map[nums[i]] = i;
            }
        }
        return ans;
    }
};