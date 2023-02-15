class Solution:
    def toHex(self, num: int) -> str:
        if num == 0: return "0"

        answer = ""

        s = "0123456789abcdef"

        while num != 0 and len(answer) < 8:
            answer = s[num & 15] + answer
            num = num >> 4

        return answer