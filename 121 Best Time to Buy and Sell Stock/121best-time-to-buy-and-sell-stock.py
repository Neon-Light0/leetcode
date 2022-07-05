class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        
        maxProfit = 0
        low = prices[0]       
        
        for price in prices:
            maxProfit = max(maxProfit, price - low)
            low = min(price, low)
        
        return maxProfit
        