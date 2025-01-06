class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        std::unordered_map<int, int> population;
        int maxPopulation = 0;

        for (auto& range : logs){
            for (int i = range[0]; i < range[1]; i++){
                population[i] += 1;
                maxPopulation = std::max(maxPopulation, population[i]);
            }
        }

        int year = INT_MAX;

        for (auto& [key, value] : population){
            if (value == maxPopulation){
                year = std::min(year, key);
            }
        }

        return year;
    }
};