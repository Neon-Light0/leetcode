class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        s_sorted = [*s]
        s_sorted.sort()
        t_sorted = [*t]
        t_sorted.sort()

        l = len(s_sorted)

        for i in range(l):
            c1 = s_sorted[i]
            c2 = t_sorted[i]

            if c1 != c2:
                return c2
        
        return t_sorted[-1]