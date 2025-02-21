class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int len = arr.size();
        int sum = 0;

        for (int i = 0; i < len; i++){
            sum += arr[i];
        }

        if (sum / 3.0 != sum / 3) return false;

        int target = sum / 3;
        int count = 0;
        int curSum = 0;

        for (int i = 0; i < len; i++){
            curSum += arr[i];
            if (curSum == target){
                count++;
                curSum = 0;
            }
        }

        if (count >= 3){
            return true;
        } else {
            return false;
        }
    }
};