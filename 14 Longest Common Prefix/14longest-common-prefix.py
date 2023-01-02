class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        def get_common_prefix(s1, s2):
            prefix = ''
            l = min(len(s1), len(s2))

            for i in range(l):
                if s1[i] == s2[i]:
                    prefix += s1[i]
                else:
                    break

            return prefix

        s_len = len(strs)

        for i in range(1, s_len):
            strs[i] = get_common_prefix(strs[i-1], strs[i])
        
        return strs[-1]





