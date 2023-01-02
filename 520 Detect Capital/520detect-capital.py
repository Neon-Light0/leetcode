class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        count1 = 0
        count2 = 0
        l = len(word)
        is_first_capitalized = False

        for i, c in enumerate(word):
            capitalized_c = c.upper()

            if c == capitalized_c:
                count1 += 1

                if i == 0:
                    is_first_capitalized = True    

            else:
                count2 += 1
        
        if count1 == l or count2 == l or (count1 == 1 and is_first_capitalized == True):
            return True
        
        return False