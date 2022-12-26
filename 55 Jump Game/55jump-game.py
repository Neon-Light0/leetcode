class Solution:
    def canJump(self, nums: List[int]) -> bool:
        l = len(nums)
        arr = [*range(l)]

        for i in range(l):
            arr[i] += nums[i]
        
        prev = 0
        index = 0

        while True:
            temp = max(arr[prev:index + 1])
            prev = index
            index = temp

            if index >= (l - 1):
                return True
            elif index == prev:
                return False