class Solution:
    def reverseVowels(self, s: str) -> str:
        ptr1 = 0
        ptr2 = len(s) - 1
        answer = list(s)
        vowels = {'a', 'e', 'i', 'o', 'u', "A", "E", "I", "O", "U"}

        def isVowel(c):
            if c in vowels:
                return True
            return False

        while ptr1 <= ptr2:
            if not isVowel(s[ptr1]):
                ptr1 += 1
            elif not isVowel(s[ptr2]):
                ptr2 -= 1
            else:
                answer[ptr1], answer[ptr2] = answer[ptr2], answer[ptr1]
                ptr1 += 1
                ptr2 -= 1
        
        return "".join(answer)




    