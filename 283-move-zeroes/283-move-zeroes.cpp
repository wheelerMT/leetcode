class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int* current = &nums[0];
        int* last = &nums[0];
        int numElements {};
        
        for(int i = 0; i < nums.size(); ++i)
        {
            if (*current != 0)
            {
                *last = *current;
                ++last;
                ++numElements;
            }
            ++current;
        }
        
        for (int i = numElements; i < nums.size(); ++i)
        {
            *last = 0;
            ++last;
        }
    }
};