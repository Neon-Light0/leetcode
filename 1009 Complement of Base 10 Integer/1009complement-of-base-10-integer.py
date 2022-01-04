class Solution(object):
    def bitwiseComplement(self, n):
        """
        :type n: int
        :rtype: int
        """
        count = 1
        temp = n
        
        while temp >= 2:
            count +=1
            temp /= 2
            
        m = '1' * count
        m = int(m, 2)
        
        return m - n