class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        // Loop through queries, get the index and value, then add the value to that index in nums
        // Sum the even values of the nums array and store it in the answer array
        
        int sum {0};
        for (auto& num : nums)
        {
            if (num % 2 == 0)
            {
                sum += num;
            }
        }
        
        vector<int> answer;
        
        for (auto& query : queries)
        {
            int value = query[0];
            int index = query[1];
            
            if (nums[index] % 2 == 0) sum -= nums[index];
            nums[index] += value;
            if (nums[index] % 2 == 0) sum += nums[index];
            
            answer.push_back(sum);
        }
        
        return answer;
    }
};