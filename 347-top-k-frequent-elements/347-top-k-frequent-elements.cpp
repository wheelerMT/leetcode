class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Use hashmap to keep track of seen values
        // Loop through nums
        // For each num, increment the count by one in hashmap
        // return k most frequent elements
        
        unordered_map<int, int> seen {};       
        for (auto& num : nums) {
            seen[num] += 1;
        }
        
        priority_queue<pair<int,int>> pQueue {};
        for (auto [key, value] : seen) {
            pQueue.push({value, key});
        }
        
        vector<int> ans {};
        while(k-- && !pQueue.empty()){
            ans.push_back(pQueue.top().second);
            pQueue.pop();
        }
        return ans;
    }
};