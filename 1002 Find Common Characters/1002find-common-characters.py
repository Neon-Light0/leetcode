class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        answer = list(words[0])

        def find_same(s1, s2):
            temp = []
            s1_dict = dict()

            for c in s1:
                if c in s1_dict:
                    s1_dict[c] += 1
                else:
                    s1_dict[c] = 1
            
            for c in s2:
                if c in s1_dict:
                    if s1_dict[c] > 1:
                        s1_dict[c] -= 1
                    else:
                        s1_dict.pop(c)
                    temp.append(c)
            
            return temp

        for i in range(len(words)):
            s1 = answer
            s2 = words[i]

            answer = find_same(s1, s2)

        return answer