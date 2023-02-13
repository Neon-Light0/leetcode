class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums.sort(reverse = True)
        answer = nums[0]
        maximums = set()

        for i in range(len(nums)):
            maximums.add(nums[i])

            if len(maximums) == 3:
                answer = nums[i]
                break
        
        return answer
