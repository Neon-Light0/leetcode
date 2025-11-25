class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int n = 1;
        int count = 1;
        std::vector<bool> mods(k, false);

        while (!mods[n % k]){
            if (n % k == 0){
                return count; 
            }

            count += 1;
            mods[n % k] = true;;
            n = (n * 10 + 1) % k;
        }

        return -1;
    }
};