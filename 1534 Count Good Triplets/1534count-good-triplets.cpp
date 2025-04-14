class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0; 
        int n = arr.size();

        for (int i = 0; i < n - 2; i++){
            for (int j = i + 1; j < n - 1; j++){
                int diff1 = std::abs(arr[i] - arr[j]);

                if (diff1 > a) continue;

                for (int k = j + 1; k < n; k++){
                    int diff2 = std::abs(arr[j] - arr[k]);
                    int diff3 = std::abs(arr[i] - arr[k]);

                    if (diff2 <= b && diff3 <= c){
                        count += 1;
                    }
                }
            }
        }

        return count;
    }
};