class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        s = s.split(' ')

        dict1 = {}
        dict2 = {}

        len1 = len(pattern)
        len2 = len(s)

        if len1 != len2:
            return False

        for i in range(len1):
            key = pattern[i]
            word = s[i]

            if key not in dict1 and word not in dict2:
                dict1[key] = word
                dict2[word] = key
            else:
                if key in dict1 and dict1[key] != word:
                    return False
                if word in dict2 and dict2[word] != key:
                    return False


        return True

        