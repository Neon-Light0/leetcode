class Solution {
public:
    int countTriples(int n) {
        int count = 0;

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                double s = std::sqrt(i * i + j * j);

                if (fmod(s, (int) s ) == 0 && s >= 1 && s <= n){
                    count += 1;
                }
            }
        }

        return count;
    }
};