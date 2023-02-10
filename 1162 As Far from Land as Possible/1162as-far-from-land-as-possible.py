class Solution:
    def is_valid(self, position, m, n):
        i, j = position

        if i >= 0 and i < m  and j >= 0 and j < n:
            return True
        return False 


    def maxDistance(self, grid: List[List[int]]) -> int:
        n = len(grid)
        queue = []
        max_dist = -1

        for i in range(n):
            for j in range(n):
                if grid[i][j] == 1:
                    queue.append((i, j))

        while queue:
            arr = [*queue]

            for position in arr:
                queue.pop(0)
                up = (position[0] - 1, position[1])
                down = (position[0] + 1, position[1])
                left = (position[0], position[1] - 1)
                right = (position[0], position[1] + 1)

                directions = [up, down, left, right]

                for direction in directions:
                    i, j = direction
                    if self.is_valid(direction, n, n) and grid[i][j] == 0:
                        grid[i][j] = 1
                        queue.append(direction)

            max_dist += 1

        if max_dist == 0:
            return -1
        return max_dist
