class Solution {
public:
    bool check(vector<int>& nums) {
        bool expended = false;
        
        for (int i = 0; i < nums.size(); i++){
            int j = (i + 1) % nums.size();

            if (nums[i] > nums[j]){
                if (!expended) {
                    expended = true;
                } else {
                    return false;
                }
            }
        }

        return true;
    }
};