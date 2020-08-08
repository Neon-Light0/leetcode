class Solution(object):
    def numIdenticalPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        count = 0
        length = len(nums)
        
        for i in range(length - 1):
            for j in range(1, length - i):
                if nums[i] == nums[j + i]:
                    count += 1
        
        return count
        