class Solution {
public:
    int maximumLength(string s) {
        std::unordered_map<std::string, int> map;

        for (int i = 0; i < s.size(); i++){
            std::string str = "";
            char c = s[i];

            for (int j = i; j < s.size(); j++){
                if (c == s[j]){
                    str += s[j];
                    map[str] += 1;
                    c = s[j];
                } else {
                    break;
                }
            }
        }


        int len = -1;

        for (auto& [substr, count] : map){
            if (count >= 3){
                len = std::max(len, int(substr.size()));
            }
        }

        return len;
    }
};