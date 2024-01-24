class Solution:
    def findRotation(self, mat: List[List[int]], target: List[List[int]]) -> bool:
        n = len(mat)*len(mat[0])
        for i in range(n):
            mat[:] = map(list,zip(*mat[::-1]))    
            if(mat == target):
                return True
        return False