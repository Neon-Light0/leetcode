class Solution(object):
    def xorOperation(self, n, start):
        """
        :type n: int
        :type start: int
        :rtype: int
        """
        init = start
        
        for i in range(1, n):
            init = init ^ (start + 2 * i)
        
        return init