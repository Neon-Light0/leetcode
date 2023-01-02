class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        ans = 0
        l = len(s)
        has_started = False

        for i in range(l-1, -1, -1):
            c = s[i]

            if c != ' ':
                has_started = True
                ans += 1
            elif has_started == True:
                break
        
        return ans

        