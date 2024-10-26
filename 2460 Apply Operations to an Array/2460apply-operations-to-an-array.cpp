class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        std::vector<int> answer;


        for (int i = 1; i < nums.size(); i++) {
            if ( nums[i - 1] == nums[i] ){
                nums[i-1] = nums[i - 1] * 2;
                nums[i] = 0;
            }
        }

        int index = 0;

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != 0){
                nums[i-index] = nums[i];
            } else {
                index += 1;
            }
        }

        for (int i = 0; i < index; i++){
            nums[nums.size() - i - 1] = 0;
        }

        return nums;
    }
};