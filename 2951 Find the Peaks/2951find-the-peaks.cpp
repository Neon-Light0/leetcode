class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        std::vector<int> answer;
        
        for (std::size_t i = 1; i < mountain.size() - 1; i++){
            int& front = mountain[i - 1];
            int& cur = mountain[i];
            int& back = mountain[i + 1];
            
            if (front < cur && cur > back){
                answer.push_back(i);
            }
        }
        
        return answer;
    }
};