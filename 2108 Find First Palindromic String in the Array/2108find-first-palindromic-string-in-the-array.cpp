class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (auto& word : words){
            bool isPalindrome = true;
            
            for (std::size_t i = 0; i < word.size()/2; i++){
                if (word[i] != word[word.size() - 1 - i]){
                    isPalindrome = false;
                }
            }
            
            if (isPalindrome) return word;
        }
        
        return "";
    }
};