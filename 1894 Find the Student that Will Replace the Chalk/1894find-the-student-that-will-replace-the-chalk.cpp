class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long sum = 0;

        for (auto& c : chalk){
            sum += c;
        }
        
        k = k % sum;

        int answer = 0;

        for (int i = 0; i < chalk.size(); i++){
            if (chalk[i] > k){
                answer = i;
                break;
            }

            k -= chalk[i];
        }

        return answer;
    }
};