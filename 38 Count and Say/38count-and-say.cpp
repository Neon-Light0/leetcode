class Solution {
public:
    string countAndSay(int n) {
        std::string answer = "1";

        for (int i = 2; i <= n; i++){
            int count = 0;
            char c = answer[0];
            std::string s = "";

            for (int j = 0; j < answer.size(); j++){
                if (c != answer[j]){
                    s += std::to_string(count) + c;
                    count = 0;
                    c = answer[j];
                }
                
                count += 1;
            }

            s += std::to_string(count) + c; 
            answer = s;
        }

        return answer;
    }
};