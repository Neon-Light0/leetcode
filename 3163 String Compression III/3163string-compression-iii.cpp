class Solution {
public:
    string compressedString(string word) {
        std::string comp = "";

        int count = 0;
        char prev = '1';
        
        for (int i = 0; i < word.size(); i++){
            if (count == 0){
                count = 1;
            } else if (word[i] == prev && count < 9 ){
                count++;
            } else {
                comp += std::to_string(count) + word[i-1];
                count = 1;
            }

            prev = word[i];

            if (i == word.size() - 1){
                comp += std::to_string(count) + word[i];
            }
        }

        return comp;
    }
};