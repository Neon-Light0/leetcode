class Solution(object):
    def maxIncreaseKeepingSkyline(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        max1 = 0
        max2 = [max(i) for i in zip(*grid)]
        sum = 0
        
        for r in range(len(grid)):
            max1 = max(grid[r])
            for c in range(len(grid[0])):       
                sum += min(max1, max2[c]) - grid[r][c]
            max1 = 0
            
        return sum
                
            
        
        