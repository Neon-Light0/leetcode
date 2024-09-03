class Solution {
public:
    int getLucky(string s, int k) {
        std::string curString = "";

        for (auto& c : s){
            curString += std::to_string(c - 'a' + 1);
        }

        for (int i = 0; i < k; i++){
            int num = 0;

            for (int j = 0; j < curString.size(); j++){
                num += curString[j] - '0';
            }

            curString = std::to_string(num);
        }

        return std::stoi(curString);   
    }
};