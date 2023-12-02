class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int answer = 0;
        std::unordered_map<char, int> charMap;

        for (std::size_t i = 0; i < chars.size(); i++){
            char c = chars[i];

                if (charMap.contains(c)){
                    charMap[c] += 1;
                } else {
                    charMap[c] = 1;
                }
        }

        for (std::string word : words){
            std::unordered_map<char, int> lookupMap = charMap;
            bool doAdd = true;

            for (std::size_t i = 0; i < word.size(); i++){
                char c = word[i];
                
                if (lookupMap.contains(c)){
                    if (lookupMap[c] > 1){
                        lookupMap[c] -= 1;
                    } else {
                        lookupMap.erase(c);
                    }
                } else {
                    doAdd = false;
                    break;
                }   
            }

            if (doAdd){
                answer += word.size();
            }
        }

        return answer;
    }
};