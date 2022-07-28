class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        dict = {'2': ['a','b','c'], '3': ['d','e','f'],
                '4': ['g','h','i'], '5':['j','k', 'l'],
                '6': ['m','n','o'], '7':['p','q', 'r', 's'],
                '8': ['t','u','v'], '9':['w','x','y','z']}
        
        if digits == '': return []
        
        tempt = []
        result = ['']
        
        for digit in digits:
            for s in result:
                for letter in dict[digit]:
                    tempt.append(s + letter)
                
            result = tempt
            tempt = []
            
        return result