class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int orders[26];

        for (int i = 0; i < order.size(); i++) {
            orders[order[i] - 'a'] = i;
        }

        auto compare = [&orders](const string& a, const string& b){

            int minLen = std::min(a.size(), b.size());

            for (int i = 0; i < minLen; i++){
                if (orders[a[i] - 'a'] < orders[b[i] - 'a']) {
                    return true;
                } else if (orders[a[i] - 'a'] > orders[b[i] - 'a']) {
                    return false;
                }
            }

            if (a.size() <= b.size()) {
                return true;
            } 

            return false;
        };

        for (int i = 1; i < words.size(); i++){
            if (!compare(words[i-1], words[i])){
                return false;
            }
        }

        return true;
    }
};