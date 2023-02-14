class Solution:
    def addBinary(self, a: str, b: str) -> str:
        a = a[::-1]
        b = b[::-1]
        num1 = 0
        num2 = 0

        for i, c in enumerate(a):
            if c == "1":
                num1 += 2 ** i
        
        for i, c in enumerate(b):
            if c == "1":
                num2 += 2 ** i

        return bin(num1+num2).replace("0b", "")
        

