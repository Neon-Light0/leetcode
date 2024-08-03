class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        
        for (int i = 1; i < arr.size(); i++){
            arr[i] += arr[i-1];
        }

        int left = 0, right = 0;

        for (int i = 0; i < arr.size(); i++){
            for (int j = i; j < arr.size(); j += 2){
                right = arr[j];
                sum += right - left;
            }

            left = arr[i];
        }

        return sum;
    }
};