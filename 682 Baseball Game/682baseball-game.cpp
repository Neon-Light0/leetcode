class Solution {
public:
    int calPoints(vector<string>& operations) {
        int scores[1000] = {0};
        int pos = 0;

        for (auto& op : operations){
            if (op ==  "+"){
                scores[pos] = scores[pos - 1] + scores[pos - 2];
                pos += 1;
            } else if (op == "D"){
                scores[pos] = 2 * scores[pos - 1];
                pos += 1;
            } else if (op == "C"){
                pos -= 1;
            } else {
                int score = std::stoi(op);
                scores[pos] = score;
                pos += 1;
            }
        }

        int res = 0;

        for (int i = 0; i < pos; i++){
            res += scores[i];
        }

        return res;
    }
};