class Solution:
    def minimumRounds(self, tasks: List[int]) -> int:
        dict = {}

        for task in tasks:
            if task in dict:
                dict[task] += 1
            else:
                dict[task] = 1

        rounds = 0

        for item in dict.items():
            key, count = item

            while count > 1:
                if count > 4:
                    count -= 3
                elif count % 3 == 0:
                    count -= 3
                else:
                    count -= 2

                rounds += 1
            
            if count == 1:
                return -1
        
        return rounds
