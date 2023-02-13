class Solution:
    def arrangeCoins(self, n: int) -> int:
        count = 0
        num = n

        while num > count:
            count += 1
            num -= count

        return count 
