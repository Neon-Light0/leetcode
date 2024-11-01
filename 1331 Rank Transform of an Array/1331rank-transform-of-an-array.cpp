class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        std::vector<int> ranks(arr.begin(), arr.end());

        std::sort(arr.begin(), arr.end());
        std::unordered_map<int, int> map;

        int curRank = 0;

        for (auto& num : arr){
            if (!map.contains(num)){
                curRank++;
                map[num] = curRank;
            }
        }

        for (auto& num : ranks){
            num = map[num];
        }

        return ranks;
    }
};