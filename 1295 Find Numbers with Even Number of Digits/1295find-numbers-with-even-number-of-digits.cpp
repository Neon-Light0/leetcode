class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (auto& num : nums){
            std::string numStr = std::to_string(num);

            if (numStr.size() % 2 == 0){
                count += 1;
            }
        }

        return count;
    }
};