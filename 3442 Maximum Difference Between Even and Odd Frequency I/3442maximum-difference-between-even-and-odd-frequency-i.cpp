class Solution {
public:
    int maxDifference(string s) {
        std::unordered_map<char, int> fmap;

        for (char& c : s){
            fmap[c] += 1;
        }

        int maxOdd = INT_MIN, minEven = INT_MAX;

        for (auto& [key,val] : fmap){
            if (val % 2){
                maxOdd = std::max(maxOdd, val);
            } else {
                minEven = std::min(minEven, val);
            }
        }

        return maxOdd - minEven;
    }
};