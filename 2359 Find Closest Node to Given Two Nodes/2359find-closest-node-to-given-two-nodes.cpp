class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        std::unordered_map<int, int> map1, map2;
        std::unordered_set<int> found;

        int i = node1;
        int distance = 0;

        while (i != -1 && !found.contains(i)){
            map1[i] += distance;
            found.insert(i);
            i = edges[i];
            distance += 1;
        }

        i = node2;
        distance = 0;
        found.clear();

        while (i != -1 && !found.contains(i)){
            map2[i] += distance;
            found.insert(i);
            i = edges[i];
            distance += 1;
        }



        int maxDistance = INT_MAX;
        int answerNode = INT_MAX;

        for (auto& [node, dist] : map1){
            if (map2.contains(node)){
                if (std::max(dist, map2[node]) < maxDistance){
                    maxDistance = std::max(dist, map2[node]);
                    answerNode = node;
                } else if (std::max(dist, map2[node]) == maxDistance){
                    answerNode = std::min(answerNode, node);
                }
            }
        }

        if (answerNode == INT_MAX) return -1;
        return answerNode;
    }
};