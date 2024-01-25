class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n = ""
        for i in digits:
            n += str(i)
        
        num = int(n)
        
        num = num + 1
        
        ans = []
        while(num > 0):
            d = num % 10
            ans.append(d)
            num = num // 10
        ans.reverse()
        return ans