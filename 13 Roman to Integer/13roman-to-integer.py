class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        sum = 0
        prev = None
        
        for c in s:
            print(sum)
            if c == 'I':
                sum +=1
            elif c == 'V':
                sum +=5
            elif c == 'X':
                sum +=10
            elif c == 'L':
                sum +=50
            elif c == 'C':
                sum +=100
            elif c == 'D':
                sum +=500
            elif c == 'M':
                sum +=1000
            
            if prev == 'I' and c == 'V':
                sum -= 2
            elif prev == 'I' and c == 'X':
                sum -= 2
            elif prev == 'X' and c == 'L':
                sum -= 20
            elif prev == 'X' and c == 'C':
                sum -= 20
            elif prev == 'C' and c == 'D':
                sum -= 200
            elif prev == 'C' and c == 'M':
                sum -= 200
            
            prev = c
            
        return sum