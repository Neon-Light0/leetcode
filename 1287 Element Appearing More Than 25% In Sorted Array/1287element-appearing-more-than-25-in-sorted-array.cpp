class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int requiredSize = arr.size() / 4;
        int prev = -1;
        int count = 0;
        
        for (std::size_t i = 0; i < arr.size(); i++){
            if (arr[i] == prev){
                count++;
            } else {
                count = 1;
            }
            
            prev = arr[i];
            
            if (count > requiredSize) return arr[i];
        }
        
        return -1;
    }
};