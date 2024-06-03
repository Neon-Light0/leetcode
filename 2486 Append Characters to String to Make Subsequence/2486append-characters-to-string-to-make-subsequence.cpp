class Solution {
public:
    int appendCharacters(string s, string t) {
        int curIndex = 0;
        
        for (char& c : s){
            if (curIndex >= t.size()) break;
            
            if (c == t[curIndex]){
                curIndex++;
            }
        }
        
        return t.size() - curIndex;
    }
};