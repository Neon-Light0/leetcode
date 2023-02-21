class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        answer = 0

        for num in nums:
            answer ^= num

        return answer