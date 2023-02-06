class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        product = [1] * len(nums)
        prefix_product = 1
        suffix_product = 1
        for i in range(len(nums)):
            product[i] *= prefix_product
            prefix_product *= nums[i]
            product[-1-i] *= suffix_product
            suffix_product *= nums[-1-i]
        return product