class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        std::vector<std::vector<int>> answer;
        std::unordered_map<int, std::vector<int>> map;
        
        for (auto& edge : edges){
            map[edge[1]].push_back(edge[0]);
        }
        
        for (int i = 0; i < n; i++){
            std::vector<int> ancesters;
            std::unordered_set<int> found;
            std::queue<int> queue;
            queue.push(i);
            
            while (!queue.empty()){
                int curNode = queue.front();
                queue.pop();
                
                if (!map.contains(curNode)) continue;
                
                for (auto& node : map[curNode]){
                    if (!found.contains(node)){
                        found.insert(node);
                        queue.push(node);
                        ancesters.push_back(node);   
                    }
                }
                
            }
            
            std::sort(ancesters.begin(), ancesters.end());
            answer.push_back(ancesters);
        }
        
        return answer;
    }
};