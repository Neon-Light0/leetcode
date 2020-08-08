class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        
        cur_max = max(candies)
        solution = []
        
        for i in range(len(candies)):
            if (candies[i] + extraCandies) >= cur_max:
                solution.append(True)
            else:
                solution.append(False)
        
        return solution