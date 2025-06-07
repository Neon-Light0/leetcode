class Solution {
public:
    string robotWithString(string s) {
        std::unordered_map<char, int> umap;

        for (auto& c : s){
            umap[c] += 1;
        }

        std::stack<char> stk;
        std::string answer;

        for (int i = 0; i < s.size(); i++){
            stk.push(s[i]);
            char minChar = 'a';
            umap[stk.top()] -= 1;

            for (int j = 0; j < 26; j++){
                if (umap['a' + j] == 0){
                    minChar += 1;
                } else {
                    break;
                }
            }

            while (!stk.empty() && stk.top() <= minChar){
                answer += stk.top();
                stk.pop();
            }

        }

        return answer;
    }
};