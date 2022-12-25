class Solution(object):
    def answerQueries(self, nums, queries):
        """
        :type nums: List[int]
        :type queries: List[int]
        :rtype: List[int]
        """

        nums.sort()
        l = len(queries)
        answer = [0] * l

        for i in range(l):
            target = queries[i]
            sum = 0
            j = 0

            while sum < target and j < len(nums):
                sum += nums[j]

                if sum <= target:
                    j += 1
            
            answer[i] = j
        
        return answer
