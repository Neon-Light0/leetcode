class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        std::vector<int> answer;
        int freq[10] = {0};

        for (int i = 0; i < digits.size(); i++){
            freq[digits[i]] += 1;
        }

        for (int i = 100; i < 1000; i++){
            int freq2[10] = {0};
            std::string str = std::to_string(i);
            int digit1 = str[0] - '0';
            int digit2 = str[1] - '0';
            int digit3 = str[2] - '0';
            freq2[digit1] += 1;
            freq2[digit2] += 1;
            freq2[digit3] += 1;

            bool notGood = false;

            for (int j = 0; j < 10; j++){
                if (freq2[j] > freq[j]){
                    notGood = true;
                    break;
                }  
            }

            if (!notGood && i % 2 == 0) {
                answer.push_back(i);
            }
        }

        return answer;
    }
};