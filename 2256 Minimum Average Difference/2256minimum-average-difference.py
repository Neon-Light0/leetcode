class Solution:
    def minimumAverageDifference(self, nums: List[int]) -> int:
        left_sum = 0
        right_sum = sum(nums)
        length = len(nums)
        diff_list = [None] * length

        for i, num in enumerate(nums):
            left_sum += num
            right_sum -= num
            diff_average = 0

            if i < (length - 1):
                diff_average = abs(int(left_sum / (1 + i)) - int(right_sum / (length - i - 1)))
            else:
                diff_average = abs(int(left_sum / length))
            
            diff_list[i] = diff_average

        return diff_list.index(min(diff_list))


