class KthLargest {
private:
    std::vector<int> nums;
    int k = 0;

public:
    KthLargest(int k, vector<int>& nums) {
        this->nums = nums;
        this->k = k;
        std::sort(this->nums.begin(), this->nums.end()); 
    }
    
    int add(int val) {
        int prev = -INT_MAX;

        for (int i = 0; i < nums.size(); i++){
            if (val >= prev && val < nums[i]){
                nums.insert(nums.begin() + i, val);
                break;
            }

            prev = nums[i];
        }

        if (nums.empty() || val >= nums[nums.size() - 1]) nums.push_back(val);

        return nums[nums.size() - k];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */