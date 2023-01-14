class Solution:
    def longestPath(self, parent: List[int], s: str) -> int:
        n = len(parent)
        adjacency_list = [[] for _ in range(n)] 

        for i in range(1, n):
            p = parent[i]

            adjacency_list[p].append(i)
        
        longest_path = 1

        def find_longest_path(node, parent):
            nonlocal longest_path
            max1, max2 = 0, 0

            for child in adjacency_list[node]:
                    res = find_longest_path(child, node)

                    if res > max1:
                        max2 = max1
                        max1 = res
                    elif res > max2:
                        max2 = res

            val = max1 + max2 + 1

            if val > longest_path:
                    longest_path = val
                    
            if s[parent] != s[node]:
                
                return 1 + max1
            else:
                return 0
        
        find_longest_path(0, -1)

        return longest_path
