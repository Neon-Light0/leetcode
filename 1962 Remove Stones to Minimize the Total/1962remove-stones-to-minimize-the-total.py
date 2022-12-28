import heapq
class MaxHeap:
    def __init__(self):
        self.heap = []
    
    def push(self, val):
        heapq.heappush(self.heap, -val)
    
    def pop(self):
        return -heapq.heappop(self.heap)
    
    def peek(self):
        if len(self.heap) <= 0:
            return False
        return -self.heap[0]

class Solution:
    def minStoneSum(self, piles: List[int], k: int) -> int:
        pile_heap = MaxHeap()

        for pile in piles:
            pile_heap.push(pile)

        for i in range(k):
            pile_heap.push(ceil(pile_heap.pop() / 2))

        sum = 0

        while pile_heap.peek():
            sum += pile_heap.pop()
        
        return sum



