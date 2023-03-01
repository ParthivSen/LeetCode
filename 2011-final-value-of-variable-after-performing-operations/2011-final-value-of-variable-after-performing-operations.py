class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        s = 0
        for op in operations:
            if(op[1]=="+"):
                s += 1
            else:
                s -= 1
        return s