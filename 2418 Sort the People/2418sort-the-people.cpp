class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        std::unordered_map<int, int> map;

        for (int i = 0; i < names.size(); i++){
            map[heights[i]] = i;
        }

        std::sort(heights.begin(), heights.end(), std::greater<int>());
        std::vector<std::string> answer(names.size());

        for (int i = 0; i < heights.size(); i++){
            answer[i] = names[map[heights[i]]];
        }

        return answer;
    }   
};