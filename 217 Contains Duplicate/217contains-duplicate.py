class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        
        n = len(nums)
        dict = {}
        
        for i in range(n):
            if nums[i] in dict:
                dict[nums[i]] += 1
                
                if dict[nums[i]] > 1:
                    return True
                
            else:
                dict[nums[i]] = 1
        
        return False