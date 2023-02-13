class Solution:
    def countOdds(self, low: int, high: int) -> int:
        counts = high - low + 1

        if low % 2 == 0 and high % 2 == 0:
            return (counts - 1) // 2
        elif (low % 2 == 0 and high % 2 != 0) or (low % 2 != 0 and high % 2 ==0):
            return counts // 2
        else:
            return (counts - 1) // 2 + 1  
        