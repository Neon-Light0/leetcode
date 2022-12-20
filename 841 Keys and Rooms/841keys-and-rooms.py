class Solution(object):
    def canVisitAllRooms(self, rooms):
        """
        :type rooms: List[List[int]]
        :rtype: bool
        """
        n = len(rooms)
        unfound_keys = set(i for i in range(1, n))

        def bfs(rooms, key, unfound_keys):
            keys = rooms[key]

            for k in keys:
                if k in unfound_keys:    
                    unfound_keys.remove(k)
                    bfs(rooms, k, unfound_keys)

        bfs(rooms, 0, unfound_keys)

        if len(unfound_keys) == 0:
            return True
        else:
            return False  