class Solution(object):
    def uniquePaths(self, m, n):
        """
        :type m: int
        :type n: int
        :rtype: int
        """
        
        lookup = [[0 for x in range(n)] for y in range(m)]
        
        for i in range(m-1, -1, -1):
            for j in range(n-1, -1, -1):
                if i == (m-1) and j == (n-1):
                    lookup[i][j] = 1
                    continue
                
                left = 0
                down = 0
                
                if j < (n-1):
                    left = lookup[i][j+1]
                
                if i < (m-1):
                    down = lookup[i+1][j]
                    
                lookup[i][j] = left + down
        
        return lookup[0][0]