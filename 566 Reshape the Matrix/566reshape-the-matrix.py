class Solution(object):
    def matrixReshape(self, mat, r, c):
        """
        :type mat: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        
        m = len(mat)
        n = len(mat[0])
        
        if (r * c) != (m * n):
            return mat
        
        result = [None] * r
        
        for i in range(r):
            tempt = [None] * c
            
            for j in range(c):
                count = i * c + j
                x = count / n
                y = count % n
                
                
                tempt[j] = mat[x][y]
                
            result[i] = tempt
        
        return result
                    
                
                