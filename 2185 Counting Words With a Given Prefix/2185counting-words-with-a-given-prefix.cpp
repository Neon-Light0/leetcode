class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;

        for (auto& word : words){
            if (word.find(pref) == 0){
                count += 1;
            }
        }

        return count;
    }
};