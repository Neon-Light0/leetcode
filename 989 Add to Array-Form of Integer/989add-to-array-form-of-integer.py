class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        string = ''
        
        for n in num:
            string += str(n)
            
        answer = list(str(int(string) + k))
        
        return answer
    
        