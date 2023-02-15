class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        answer = []
        
        for num in nums:
            i = abs(num) - 1

            if nums[i] > 0:
                nums[i] = -nums[i]

        for i in range(len(nums)):
            if nums[i] > 0:
                answer.append(i+1)

        return answer         

        