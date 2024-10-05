class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        std::unordered_set<int> set;

        for (auto& candy : candyType){
            set.insert(candy);
        }

        int n = candyType.size() / 2;
        return std::min(n, (int)set.size());
    }
};