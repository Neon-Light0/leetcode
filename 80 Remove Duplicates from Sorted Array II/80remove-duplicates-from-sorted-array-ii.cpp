class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = nums[0]  - 1;
        int prev2 = nums[0] - 2;
        int index = 0;

        for (auto& num : nums){
            if ((prev != num || prev2 != num)){
                nums[index] = num;
                index++;
            } 

            prev2 = prev;
            prev = num;
        }

        return index;
    }
};