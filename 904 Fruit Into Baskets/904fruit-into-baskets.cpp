class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int res = std::numeric_limits<int>::min();
        std::unordered_map<int, int> freq;
        int left = 0;

        for (int i = 0; i < fruits.size(); i++){
            freq[fruits[i]] += 1;

            while (freq.size() > 2){
                freq[fruits[left]] -= 1;
                
                if (freq[fruits[left]] < 1){
                    freq.erase(fruits[left]);
                }

                left += 1;
            }

            res = std::max(res, i - left + 1);
        }

        return res;
    }
};