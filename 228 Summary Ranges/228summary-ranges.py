class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        answer = []

        arr = []
        
        if len(nums) == 0:
            return answer
        else:
            arr = [nums[0], nums[0]]

        for i in range(1, len(nums)):
            num = nums[i]

            if num == arr[1] + 1:
                arr[1] = num
            else:
                answer.append(arr)
                arr = [num, num]

        answer.append(arr)

        for i in range(len(answer)):
            if answer[i][0] == answer[i][1]:
                answer[i] = f"{answer[i][0]}"
            else:    
                answer[i] = f"{answer[i][0]}->{answer[i][1]}"
            
        return answer
            
