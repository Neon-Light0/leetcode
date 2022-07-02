class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        
        l = len(nums)
        answer = [0 for num in nums]
        
        for i in range(l):
            j = (i + k) % l
            
            answer[j] = nums[i]
            
        for i in range(l):
            nums[i] = answer[i]
        