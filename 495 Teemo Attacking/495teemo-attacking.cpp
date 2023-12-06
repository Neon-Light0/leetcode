class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int total = 0;
        
        for (std::size_t i = 1; i < timeSeries.size(); i++){
            total += std::min(duration, timeSeries[i] - timeSeries[i-1]);
        }
        
        if (timeSeries.size()){
            return total + duration;   
        } 
        
        return total;
    }
};