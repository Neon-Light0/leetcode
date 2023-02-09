class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        answer = [1]

        if rowIndex == 0:
            return answer

        for i in range(1, rowIndex + 1):
            arr = [0] * (i + 1)

            arr[0] = 1
            arr[-1] = 1

            for j in range(len(answer)- 1):
                arr[j + 1] = answer[j] + answer[j + 1]
            
            answer = arr
        return answer

