class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        
        l = len(s)
        
        if l != len(t):
            return False
        
        dict = {}
        dict2 = {}
        
        for i in range(l):
            if s[i] not in dict:
                dict[s[i]] = t[i]
            else:
                if dict[s[i]] != t[i]:
                    return False
                
            if t[i] not in dict2:
                dict2[t[i]] = s[i]
            else:
                if dict2[t[i]] != s[i]:
                    return False
        
        return True
                
                
        