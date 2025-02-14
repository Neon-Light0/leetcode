class ProductOfNumbers {
    std::vector<int> nums = {1};
public:
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        if (num == 0){
            nums = {1};
        } else {
            nums.push_back(nums[nums.size() - 1] * num);
        }
    }
    
    int getProduct(int k) {
        if (k > nums.size() - 1){
            return 0;
        } else {
            return nums[nums.size() - 1] / nums[nums.size() - k - 1];
        }
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */