class Solution:
    def restoreIpAddresses(self, s: str) -> List[str]:
        length = len(s)
        answer = []

        if length > 12 or length < 4 or not s.isnumeric():
            return answer

        for i in range(1,4):
            for j in range(i+1, i+4):
                for k in range(j+1,j+4):
                    if k > length - 1:
                        break

                    nums = [s[0:i],s[i:j],s[j:k],s[k:length]]
                    flag = False

                    for num in nums:
                        if len(num) == 2 and num[0] == '0':
                            flag = True
                            break
                        if len(num) == 3 and num[0] == '0':
                            flag = True
                            break
                        if int(num) > 255 or int(num) < 0:
                            flag = True
                            break
                        if len(num) > 3:
                            flag = True
                            break
                    
                    if flag == False:
                        valid_ip = nums[0] + '.' + nums[1] + '.' + nums[2] + '.' + nums[3]
                        answer.append(valid_ip)
        
        return answer


                    

        