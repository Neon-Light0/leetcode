class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int biggest = -1, secondBiggest = -1;
        int smallest = 100000, secondSmallest = 100000;
        
        for (int num : nums){
            if (num > biggest){
                secondBiggest = biggest;
                biggest = num;
            } else if (num > secondBiggest){
                secondBiggest = num;
            } 
            
            if (num < smallest){
                secondSmallest = smallest;
                smallest = num;
            } else if (num < secondSmallest){
                secondSmallest = num;
            }
        }
        
        return (biggest * secondBiggest) - (smallest * secondSmallest);
    }
};