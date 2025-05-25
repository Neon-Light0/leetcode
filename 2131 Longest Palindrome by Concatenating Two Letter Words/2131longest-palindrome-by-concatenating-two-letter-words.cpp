class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        std::unordered_map<std::string, int> freq;

        for (auto& word : words){
            freq[word] += 1;
        }

        int len = 0;    
        int mirror = 0;

        for (auto& [word, count] : freq){
            if (count <= 0) continue;

            std::stringstream ss;
            ss << word[1] << word[0];

            if (ss.str() == word){
                len += count / 2 * 4;
                if (mirror < 1 && count % 2 == 1){
                    len += 2;
                    mirror += 1;
                }

                continue;
            }

            if (freq.contains(ss.str())){
                int minCount = std::min(count, freq[ss.str()]);
                len += minCount * 4;
                freq[word] -= minCount;
                freq[ss.str()] -= minCount;
            }
        }

        return len;
    }
};