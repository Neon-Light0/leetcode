class Solution:
    def titleToNumber(self, columnTitle: str) -> int:
        answer = 0
        l = len(columnTitle) - 1

        for c in columnTitle:
            answer += (ord(c) - ord("A") + 1) * 26 ** l
            l -= 1

        return answer 