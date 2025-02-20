class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        std::unordered_set<std::string> set;

        for (auto& num : nums){
            set.insert(num);
        }

        for (int i = 0; i <= 16; i++){
            int num = i;
            std::string binStr = "";

            for (int j = 0; j < n; j++){
                if (num > 0){
                    int curBit = num % 2;
                    binStr = std::to_string(curBit) + binStr;
                    num = num / 2;
                } else {
                    binStr = '0' + binStr;
                }
            }

            if (!set.contains(binStr)) return binStr;
        }

        return "";
    }
};