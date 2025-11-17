class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int pos = -1;

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == 1){
                if (pos < 0){
                    pos = i;
                } else {
                    if (i - pos - 1 < k){
                        return false;
                    }

                    pos = i;
                }
            }
        }

        return true;
    }
};