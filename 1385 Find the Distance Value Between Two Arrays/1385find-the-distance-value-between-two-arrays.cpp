class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        
        for (auto& n : arr1){
            bool found = false;
            
            for (auto& m : arr2){
                int diff = std::abs(n - m);
                
                if (diff <= d){
                    found = true;
                    break;
                }
            }
            
            if (!found){
                count ++;
            }
        }
        
        return count;
    }
};