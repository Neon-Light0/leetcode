class Solution:
    def strToNum(self, num: str):
        dict = {'0':0,'1':1,'2':2,'3':3,'4':4,'5':5,'6':6,'7':7,'8':8,'9':9}
        multiplier = 1
        length = len(num)
        sum = 0
        
        for i in range(length - 1, -1, -1):
            sum += dict[num[i]] * multiplier
            multiplier *= 10
            
        return sum
        
    def multiply(self, num1: str, num2: str) -> str:
        n1 = self.strToNum(num1)
        n2 = self.strToNum(num2)
        
        return str(n1 * n2)
        
        