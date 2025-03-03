class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int len = nums.size();
        std::vector<int> answer(len);
        int ptr1 = 0, ptr2 = len - 1;

        for (int i = 0, j = len - 1; i < len; i++, j--){
            if (nums[i] < pivot){
                answer[ptr1] = nums[i];
                ptr1 += 1;
            } 

            if (nums[j] > pivot){
                answer[ptr2] = nums[j];
                ptr2 -= 1;
            }
        }

        while (ptr1 <= ptr2){
            answer[ptr1] = pivot;
            ptr1 += 1;
        }
        
        return answer;
    }
};