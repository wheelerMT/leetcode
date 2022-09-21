class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        if (nums.size() == 1) return nums[0];
        
        double average {};
        for (int i = 0; i < k; ++i)
        {
            average += nums[i];
        }
        average /= k;
        
        double rollingSum = k * average;
        for (int i = k; i < nums.size(); ++i)
        {
            rollingSum += nums[i];
            rollingSum -= nums[i - k];
            if (rollingSum / k > average)
            {
                average = rollingSum / k;
            }
        }
        
        return average;
        
    }
};