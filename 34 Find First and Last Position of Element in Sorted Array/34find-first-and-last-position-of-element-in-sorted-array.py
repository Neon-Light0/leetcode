class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:

        answer = [-1,-1]
        left = 0
        right = len(nums) - 1
        isFound = False
        mid = (left + right) // 2

        while left <= right:
            if nums[mid] == target:
                isFound = True
                break
            elif nums[mid] > target:
                right = mid - 1
            elif nums[mid] < target:
                left = mid + 1
            mid = (left + right) // 2

        if not isFound:
            return answer
        
        left = mid
        right = mid

        while left >= 0 and nums[left] == target:
            left -= 1
        
        while right < len(nums) and nums[right] == target:
            right += 1

        return [left+ 1, right - 1]

