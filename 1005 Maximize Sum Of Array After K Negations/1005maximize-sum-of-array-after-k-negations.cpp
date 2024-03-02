class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        std::sort(nums.begin(), nums.end(), [](const int& a, const int& b)->bool{
            return std::abs(a) > std::abs(b);    
        });
        
        int j = 0;
        int l = nums.size() - 1;
        int count = 0;
        
        while (count < k ){
            if (nums[j] < 0 || j == l){
                nums[j] *= -1;
                count++;
            } 
            
            j = min(j+1, l);
        }
        
        int sum = 0;
        
        for (auto& num : nums){
            sum += num;
        }
        
        return sum;
    }
};