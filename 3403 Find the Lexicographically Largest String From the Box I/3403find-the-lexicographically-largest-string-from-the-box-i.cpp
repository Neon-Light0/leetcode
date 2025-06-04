class Solution {
public:
    string answerString(string word, int numFriends) {
        if (numFriends == 1) return word;

        int n = word.size();
        char c = 'a';
        std::vector<int> indices;

        for (int i = 0; i < n; i++){
            if (word[i] > c){
                c = word[i];
                indices.clear();
            }

            if (word[i] == c){
                indices.push_back(i);
            }
        }
        
        int len = n - numFriends + 1;
        std::string largest = "";

        for (auto& i : indices){
            largest = std::max(largest, word.substr(i, len));
        }

        return std::move(largest);
    }
};