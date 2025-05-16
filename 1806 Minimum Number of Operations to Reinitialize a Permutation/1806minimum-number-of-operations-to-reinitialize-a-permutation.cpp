class Solution {
public:
    int reinitializePermutation(int n) {
        std::vector<int> perm(n);

        for (int i = 0; i < n; i++){
            perm[i] = i;
        } 

        int count = 0;

        while (true){
            bool allSame = true;
            std::vector<int> arr(n);

            for (int i = 0; i < n; i++){
                if (i % 2 == 0){
                    arr[i] = perm[i / 2];
                } else {
                    arr[i] = perm[n / 2 + (i - 1) / 2];
                }

                if (arr[i] != i){
                    allSame = false;
                }
            }
            
            perm = std::move(arr);
            count += 1;
            if (allSame) break;
        }

        return count;
    }
};