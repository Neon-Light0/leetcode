class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        
        s = str(abs(x))
        s = s[-1::-1]
        
        if x < 0:
            s = '-' + s
        
        s = int(s)
        
        if s >= -2**31 and s <=(2**31)-1:
            return s
        
        return 0
        