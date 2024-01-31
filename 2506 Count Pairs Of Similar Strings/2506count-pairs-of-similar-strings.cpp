class Solution {
private:
    bool isSimilar(const std::string& a, const std::string& b){
        std::unordered_set<char> charSet;
        std::unordered_set<char> charSet2;
        
        for (auto& c : a){
            charSet.insert(c);
        }
        
        int curLen = charSet.size();
        
        for (auto& c : b){
            if (!charSet.contains(c)) return false;
            charSet2.insert(c);
        }
        
        return charSet.size() == charSet2.size();
    }
    
public:
    int similarPairs(vector<string>& words) {
        int count = 0;
        
        for (std::size_t i = 0; i < words.size() - 1; i++){
            for (std::size_t j = i + 1; j < words.size(); j++){
                if (isSimilar(words[i], words[j])){
                    count++;
                }
            }
        }
        
        return count;
    }
};