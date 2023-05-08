class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> product(nums.size(), 1);
        int prefixProduct = 1;
        int suffixProduct = 1;
        
        for (int i = 0; i < nums.size(); i++) {
            product[i] *= prefixProduct;
            prefixProduct *= nums[i];
            product[nums.size() - 1 - i] *= suffixProduct;
            suffixProduct *= nums[nums.size() - 1 - i];
        }
        return product;  
    }
};