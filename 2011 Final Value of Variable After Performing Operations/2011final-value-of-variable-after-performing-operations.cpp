class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val = 0;

        for (const auto& operations : operations){
            switch (operations[1]){
                case '+':
                    val += 1;
                    break;
                default:
                    val -= 1;
                    break;
            }
        }

        return val;
    }
};