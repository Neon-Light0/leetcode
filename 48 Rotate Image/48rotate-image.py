class Solution(object):
    def rotate(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        n = len(matrix)
        
        def swap(m, x, y):
            tempt = m[x[0]][x[1]]
            m[x[0]][x[1]] = m[y[0]][y[1]]
            m[y[0]][y[1]] = tempt
        
        for i in range(n - 1):
            for j in range(1+i, n):
                a = (i, j)
                b = (j, i)
                swap(matrix, a, b)
        
        for i in range(n):
            left = 0
            right = n - 1
            
            while left <= right:
                swap(matrix, (i, left), (i, right))
                left += 1
                right -= 1
        