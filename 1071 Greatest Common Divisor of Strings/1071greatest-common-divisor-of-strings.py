class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        l1 = len(str1)
        l2 = len(str2)
        min_l = min(l1, l2)
        max_l = max(l1,l2)
        longer_str = False

        if l1 > l2:
            longer_str = str1
        else:
            longer_str = str2

        for i in range(min_l):
            if str1[i] != str2[i]:
                return ""
        
        for i in range(abs(l1 - l2)):
            if longer_str[i] != longer_str[i + min_l]:
                return ""


        def gcd(a, b):
            while b != 0:
                a, b = b, a % b
            return a
        
        num = gcd(l1,l2)

        return str1[0:num]
        


        







