class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> answer;
        vector<string> list;
        
        generatePartitions(s, answer, 0, list);
        
        return answer;
    }
    
    void generatePartitions(string& s, vector<vector<string>>& answer, std::size_t index, vector<string>& list){
        if (index == s.size()){
            answer.push_back(list);
            return;
        }
        
        string curString;
        
        for (std::size_t i = index; i < s.size(); i++){
            curString += s[i];
            
            if (isPalindrome(curString)){
                list.push_back(curString);
                
                generatePartitions(s, answer, i + 1, list);
                
                list.pop_back();
            }
        }
    }
    
    bool isPalindrome(const string& s){
        std::size_t len = s.size();
        
        for (std::size_t i = 0; i < len / 2; i++){
            if (s[i] != s[len - 1 - i]){
                return false;
            }
        }
        
        return true;
    }
};