class Solution {
public:
    char kthCharacter(int k) {
        std::string word = "a";

        while (word.size() < k){
            std::string temp = "";

            for (auto& c : word){
                temp += 'a' + ((c - 'a' + 1) % 26); 
            }

            word += temp;
        }

        return word[k - 1];
    }
};