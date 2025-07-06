class FindSumPairs {
private:
    std::unordered_map<int, int> map1, map2;
    std::vector<int> nums2;

public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        for (auto& num : nums1){
            map1[num] += 1;
        }   

        for (auto& num : nums2){
            map2[num] += 1;
        }

        this->nums2 = nums2;
    }
    
    void add(int index, int val) {
        int prev = nums2[index];
        int cur = nums2[index] + val;
        nums2[index] = cur;

        map2[prev] -= 1;
        map2[cur] += 1;
    }
    
    int count(int tot) {
        int total = 0;

        for (auto& [num, count] : map2){
            int diff = tot - num;

            if (map1.contains(diff)){
                total += count * map1[diff];
            }
        }

        return total;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */