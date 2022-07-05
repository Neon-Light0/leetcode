class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        
        stack = []
        
        for c in s:
            if c == '(' or c == '{' or c == '[':
                stack.append(c)
                continue
            
            if not stack:
                return False
            
            if c == ')' and stack[-1] != '(':
                return False
            elif c == '}' and stack[-1] != '{':
                return False
            elif c == ']' and stack[-1] != '[':
                return False
            else:
                stack.pop(-1)
        
        if not stack:
            return True
        else:
            return False