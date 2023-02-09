class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        s2 = ""

        for i in range(len(s)):
            c = s[i]

            if c.isnumeric() or (c >= "a" and c <= "z"):
                s2 += c

        for i in range(len(s2) // 2):
            if s2[i] != s2[len(s2)-1-i]:
                return False

        return True