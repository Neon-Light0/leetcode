class Solution:
    def minTime(self, n: int, edges: List[List[int]], hasApple: List[bool]) -> int:
        n = len(hasApple)
        apples = set()

        for i in range(n):
            if hasApple[i]:
                apples.add(i)

        edges_dict = {}

        for edge in edges:
            node1 = edge[0]
            node2 = edge[1]

            if node1 in edges_dict:
                edges_dict[node1].add(node2)
            else:
                edges_dict[node1] = set([node2])
            
            if node2 in edges_dict:
                edges_dict[node2].add(node1)
            else:
                edges_dict[node2] = set([node1])

        visited = set()

        def dfs(node):
            visited.add(node)
            val = 0

            for neighbor in edges_dict[node]:
                if neighbor not in visited:
                    val += dfs(neighbor)

            if node in apples or val > 0:
                return val + 2
            
            return val

        result = dfs(0)

        return max(result-2, 0)
