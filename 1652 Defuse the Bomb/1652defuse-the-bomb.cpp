class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        std::vector<int> answer;
        int length = code.size();

        for (int i = 0; i < length; i++){
            int sum = 0;
            
            for (int j = 1; j <= std::abs(k); j++){
                if (k > 0){
                    sum += code[(i+j) % length];
                } else if (k < 0){
                    sum += code[((i-j) + length) % length];
                } 
            }

            answer.push_back(sum);
        }

        return answer;
    }
};