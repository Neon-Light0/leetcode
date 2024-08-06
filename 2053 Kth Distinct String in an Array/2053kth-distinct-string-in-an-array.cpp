class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        std::unordered_map<std::string, int> map;

        for (std::string& s : arr){
            map[s] += 1;
        }

        for (std::string& s : arr){
            if (map[s] == 1) {
                k -= 1;

                if (k == 0) {
                    return s;
                }
            } 
        }

        return "";
    }
};