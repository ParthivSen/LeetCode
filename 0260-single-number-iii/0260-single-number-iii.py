class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        d = dict()
        for i in nums:
            d[i] = 0
        for i in nums:
            if(i in nums):
                d[i] += 1
            else:
                d[i] = 1
        
        ans = []
        for key, val in d.items():
            if (val == 1):
                ans.append(key)
        
        return ans