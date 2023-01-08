class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        l = len(gas)

        if sum(gas) < sum(cost):
            return -1

        startingIndex = 0
        curGas = 0

        for i in range(l):
            curGas += gas[i] - cost[i]

            if curGas < 0:
                startingIndex = i + 1
                curGas = 0

        return startingIndex


