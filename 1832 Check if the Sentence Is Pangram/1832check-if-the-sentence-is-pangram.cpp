class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool occurences[26] = {false};

        for (char& c : sentence){
            occurences[c - 'a'] = true;
        }

        for (int i = 0; i < 26; i++){
            if (!occurences[i]){
                return false;
            }
        }
        
        return true;
    }
};