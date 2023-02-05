class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        list1 = [0] * 26
        list2 = [0] * 26
        answer = []
        l1 = len(s)
        l2 = len(p)

        if l2 > l1:
            return answer

        for c in p:
            list1[ord(c) - ord('a')] += 1
        
        for i in range(l2):
            c = s[i]
            list2[ord(c) - ord('a')] += 1
        
        for i in range(l1 - l2 + 1):
            if list1 == list2:
                answer.append(i)
            
            list2[ord(s[i]) - ord('a')] -= 1

            j = i + l2

            if j < l1:
                list2[ord(s[j]) - ord("a")] +=1
            
        return answer


        
