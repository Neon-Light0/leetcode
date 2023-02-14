class NumArray:

    def __init__(self, nums: List[int]):
        self.sums = [0] * len(nums)

        prev = 0

        for i in range(len(nums)):
            self.sums[i] = prev + nums[i]
            prev = self.sums[i]

    def sumRange(self, left: int, right: int) -> int:
        num_left = 0 if left == 0 else self.sums[left - 1]
        num_right = self.sums[right]

        return num_right - num_left


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)