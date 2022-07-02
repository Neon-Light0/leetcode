class Solution(object):
    def isMonotonic(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        
        answer = True
        confirmed = 0
        
        
        for i in range(len(nums) - 1):
            if nums[i] < nums[i+1]:
                if confirmed == -1:
                    return False
                confirmed = 1
            elif nums[i] > nums[i+1]:
                if confirmed == 1:
                    return False
                confirmed = -1
        
        return answer
            