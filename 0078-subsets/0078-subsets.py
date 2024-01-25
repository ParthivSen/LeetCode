class Solution:
    def subsets(self, nums: List[int]):
        def sbs(nums):
            if len(nums) == 0:
                return [[]]
            x = sbs(nums[:-1])
            return x + [[nums[-1]] + y for y in x]
        return sbs(nums)