class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        std::vector<int> answer = {0, 0};
        long long diff = 0;
        std::size_t maxLength = std::max(aliceSizes.size(), bobSizes.size());

        for (std::size_t i = 0; i < maxLength; i++){
            if (i < aliceSizes.size()){
                diff += aliceSizes[i];
            }

            if (i < bobSizes.size()){
                diff -= bobSizes[i];
            }
        }

        std::unordered_set<int> s(bobSizes.begin(), bobSizes.end());

        for (const auto& num : aliceSizes){
            int target = num - (diff / 2);

            if (s.contains(target)){
                return {num, target};
            }
        }
        return answer;
    }
};