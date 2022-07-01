class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        
        pos = 0
        
    
        
        for i in range(len(t)):
            if pos == len(s):
                break
            if s[pos] == t[i]:
                pos += 1
        
        if pos == len(s):
            return True
        else:
            return False