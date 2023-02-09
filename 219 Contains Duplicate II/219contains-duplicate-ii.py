class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        dict = {}
        length = len(nums)

        for i in range(length):
            if nums[i] not in dict:
                dict[nums[i]] = i
            else:
                if abs(dict[nums[i]] - i) <= k:
                    return True
                else:
                    dict[nums[i]] = i        

        return False