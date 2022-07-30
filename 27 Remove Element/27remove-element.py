class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        
        offset = 0;
        length = len(nums)
        
        for i in range(length):
            if nums[i] == val:
                offset += 1
                continue 
            
            nums[i - offset] = nums[i]
        
        return len(nums) - offset;