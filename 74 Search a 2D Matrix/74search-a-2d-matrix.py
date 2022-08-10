class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        
        m = len(matrix)
        n = len(matrix[0])
        
        curRow = 0
        
        for i in range(1, m):
            if target < matrix[i][0]:
                break
            curRow += 1

        for i in range(n):
            if matrix[curRow][i] == target:
                return True
            
        return False