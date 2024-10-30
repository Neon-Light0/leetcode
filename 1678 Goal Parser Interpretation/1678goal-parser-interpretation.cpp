class Solution {
public:
    string interpret(string command) {
        string answer = "";
        string cur = "";

        for (auto& c : command){
            cur += c;
            
            if (cur == "G"){
                answer += "G";
                cur = "";
            } else if (cur == "(al)"){
                answer += "al";
                cur = "";
            } else  if (cur == "()"){
                answer += "o";
                cur = "";
            }
        }

        return answer;
    }
};