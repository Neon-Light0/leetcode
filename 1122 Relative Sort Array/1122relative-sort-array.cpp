class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        std::vector<int> answer;
        std::vector<int> notFound;
        std::unordered_map<int, int> map;
        
        for (std::size_t i = 0; i < arr2.size(); i++){
            map[arr2[i]] = i;
        }
        
        for (int& num : arr1 ){
            if (map.contains(num)){
                answer.push_back(num);
            } else {
                notFound.push_back(num);
            }
        }
                
        std::sort(answer.begin(), answer.end(), [&map](const int& a, const int& b)->bool{
            return map[a] < map[b];
        });
                
        std::sort(notFound.begin(), notFound.end());
        
        for (auto& num : notFound){
            answer.push_back(num);
        }
                
        return answer;
        
    }
};