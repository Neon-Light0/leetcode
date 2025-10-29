class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        std::vector<std::string> res;
        int i = 0;

        for (int num : target){
            while (num - i - 1 != 0){
                res.push_back("Push");
                res.push_back("Pop");
                i++;
            }

            res.push_back("Push");
            i++;
        }

        return res;
    }
};