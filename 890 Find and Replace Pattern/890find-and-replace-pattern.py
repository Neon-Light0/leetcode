class Solution(object):
    def findAndReplacePattern(self, words, pattern):
        """
        :type words: List[str]
        :type pattern: str
        :rtype: List[str]
        """
        
        answer = []
        
        for word in words:
            dict1 ={}
            dict2 = {}
            flag = True
            
            for i, c in enumerate(pattern):
                if c not in dict1:
                    if word[i] in dict2:
                        flag = False
                        break
                    dict1[c] = word[i]
                    dict2[word[i]] = c
                    continue
                
                if dict1[c] != word[i] or dict2[word[i]] != c:
                    flag = False
                    break
            
            if flag == True:
                answer.append(word)
        
        return answer
                
                
                    