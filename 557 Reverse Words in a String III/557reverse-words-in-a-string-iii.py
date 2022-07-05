class Solution(object):
    def reverse(self, s, l, r):
        left = l
        right = r
        print((l,r))
        while left < right:
            tempt = s[left]
            s[left] = s[right]
            s[right] = tempt
            left +=1
            right -=1
            
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        
        pos = []
        start = 0
        lst = list(s)
        
        for i in range(len(s)):
            if s[i] == ' ':
                pos.append((start, i-1))
                start = i + 1
        
        pos.append((start, len(s) - 1))
        
        for x in pos:
            self.reverse(lst, x[0], x[1])
            
        return  ''.join(lst)