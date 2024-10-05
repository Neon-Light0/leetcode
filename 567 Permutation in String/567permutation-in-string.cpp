class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        std::vector<int> freq1(26, 0);
        std::vector<int> freq2(26, 0);

        for (char& c : s1){
            freq1[c - 'a'] += 1;
        }

        for (std::size_t i = 0; i < s2.size(); i++){
            freq2[s2[i] - 'a'] += 1;

            if (i >= s1.size()){
                freq2[s2[i-s1.size()] - 'a'] -= 1;
            }

            bool result = true;

            for (std::size_t j = 0; j < 26; j++){
                if (freq1[j] != freq2[j]){
                    result = false;
                    break;
                }
            }

            if (result) return true;
        }

        return false;
    }
};