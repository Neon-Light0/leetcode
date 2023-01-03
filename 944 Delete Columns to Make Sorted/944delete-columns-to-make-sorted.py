class Solution:
    def minDeletionSize(self, strs: List[str]) -> int:
        m = len(strs)
        n = len(strs[0])

        sum = 0

        for i in range(n):
            for j in range(m - 1):
                cur = strs[j][i]
                next = strs[j+1][i]

                if cur > next:
                    sum += 1
                    break
        
        return sum
