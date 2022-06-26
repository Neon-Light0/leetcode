class Solution(object):
    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        
        counter = 0
        m = len(grid)
        n = len(grid[0])
        
        for i in range(m):
            for j in range(n):
                if grid[i][j] == "1":
                    counter += 1
                    
                    queue = [(i,j)]
                    
                    while queue:
                        k, l = queue.pop(0)
                        
                        if grid[k][l] == "1":
                            if k-1 >= 0:
                                queue.append((k-1, l))
                            if k+1 < m:
                                queue.append((k+1, l))
                            if l-1 >= 0:
                                queue.append((k, l-1))
                            if l+1 < n:
                                queue.append((k, l+1))
                                
                            grid[k][l] = "0"        
                        
        return counter