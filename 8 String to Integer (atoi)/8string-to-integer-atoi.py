class Solution(object):
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        size = len(str)
        solution = ""
        index = 0
        
        for i in range(size):
            if str[i] != ' ':
                break
            else:
                index += 1
        
        if index >= size:
            return 0
        
        first = str[index]
        
        if first == '+' or first == '-' or first.isdigit() == True:
            solution += first
            index += 1
        else:
            return 0

        for i in range(index, size):
            if str[i].isdigit() == False:
                break
            solution += str[i]
        
            
        if solution == '+' or solution == '-':
            return 0
        
        solution =  int(solution)
        
        if solution > (2**31 - 1):
            return 2**31 - 1
        elif solution < (-2**31):
            return -(2**31)
        else:
            return solution
            
        
        