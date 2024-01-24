class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        ans = nums1 + nums2
        ans.sort()
        mid = len(ans) // 2
        res = (ans[mid] + ans[~mid]) / 2
        
        return res