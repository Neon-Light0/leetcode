class Solution {
private:
    bool isVowel(char c){
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return true;
        }

        return false;
    }

public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        std::vector<int> answer;
        std::vector<int> sums(words.size() + 1, 0);

        for (int i = 0; i < words.size(); i++){
            std::string& word = words[i];

            if (isVowel(word[0]) && isVowel(word[word.size() - 1])){
                sums[i + 1] = sums[i] + 1;
            } else {
                sums[i + 1] = sums[i];
            }
        }

        for (auto& query : queries){
            int left = query[0] + 1;
            int right = query[1] + 1;

            answer.push_back(sums[right] - sums[left - 1]);
        }

        return answer;
    }
};