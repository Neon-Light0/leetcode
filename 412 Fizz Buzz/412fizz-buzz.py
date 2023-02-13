class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        answer = [0] * n

        for i in range(n):
            j = i + 1

            if j % 3 == 0 and j % 5 == 0:
                answer[i] = "FizzBuzz"
            elif j % 3 == 0:
                answer[i] = "Fizz"
            elif j % 5 == 0:
                answer[i] = "Buzz"
            else:
                answer[i] = str(j)
        
        return answer