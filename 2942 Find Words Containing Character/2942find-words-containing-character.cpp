class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        std::vector<int> indices;

        for (int i = 0; i < words.size(); i++){
            std::string& word = words[i];

            for (auto& c : word){
                if (c == x){
                    indices.push_back(i);
                    break;
                }
            }
        } 

        return std::move(indices);
    }
};