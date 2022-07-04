class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        
        l = len(digits)
        carry = 1
        
        for i in range(l-1, -1, -1):
            s = carry + digits[i]
            
            if s > 9:
                carry = 1
                s -= 10
            else:
                carry = 0
                
            digits[i] = s
            
            if i == 0 and carry == 1:
                digits.insert(0, 1)
        
        return digits