class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        std::vector<std::string> answer;
        std::unordered_map<char, int> words2Map;

        for (auto& word : words2){
            std::unordered_map<char, int> map;

            for (auto& c : word){
                map[c] += 1;
            }

            for (auto& [key, val] : map){
                words2Map[key] = std::max(words2Map[key], val);
            }
        }


        for (int i = 0; i < words1.size(); i++){
            std::unordered_map<char, int> freq;

            for (auto& c : words1[i]){
                freq[c] += 1;
            }

            bool isUniversal = true;

            for (auto& [key, val] : words2Map){
                if (!freq.contains(key) || freq[key] < val){
                    isUniversal = false;
                    break;
                }
            }
            
            if (isUniversal){
                answer.push_back(words1[i]);
            }
        }

        return answer;
    }
};