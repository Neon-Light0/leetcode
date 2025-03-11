class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        int freq[3] = {-1,-1,-1};

        for (std::size_t i = 0; i < s.size(); i++){
            if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c'){
                freq[s[i] - 'a'] = i;
            } 

            count += 1 + std::min({freq[0], freq[1], freq[2]});
        }

        return count;
    }
};