class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        std::vector<std::string> res;

        for (int i = 0; i < s.size(); i += k){
            std::string str;

            for (int j = i; j < i + k; j++){
                if (j < s.size()){
                    str += s[j];
                } else {
                    str += fill;
                }
            }

            res.push_back(str);
        }

        return res;
    }
};