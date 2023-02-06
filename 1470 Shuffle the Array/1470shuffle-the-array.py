class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        answer = [0] * len(nums)
        j = 0

        for i in range(0, len(nums), 2):
            answer[i] = nums[j]
            answer[i+1] = nums[j + len(nums) // 2]
            j += 1

        return answer 
