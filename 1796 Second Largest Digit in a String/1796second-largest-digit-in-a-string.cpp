class Solution {
public:
    int secondHighest(string s) {
        bool nums[10] = {false};

        for (auto& c : s){
            if (isdigit(c)){
                int num = c - '0';
                nums[num] = true;
            }
        }

        bool foundHighest = false;
        int answer = -1;

        for (int i = 9; i >= 0; i--){
            if (nums[i]){
                if (!foundHighest){
                    foundHighest = true;
                } else {
                    answer = i;
                    break;
                }
            }
        }

        return answer;
    }
};