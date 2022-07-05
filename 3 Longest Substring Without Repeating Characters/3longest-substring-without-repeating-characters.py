class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        dict = {}
        ln = len(s)
        i = 0
        longest = 0
        
        while i < ln:
            if s[i] not in dict:
                dict[s[i]] = i
                i += 1
            else:
                i = dict[s[i]] + 1
                longest = max(longest, len(dict))
                dict = {}
        
        longest = max(longest, len(dict))
        
        return longest
        
            
        