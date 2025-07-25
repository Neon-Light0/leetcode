static int findGCD(int a, int b){
    while (b != 0){
        int c = b;
        b = a % b;
        a = c;
    }

    return a;
}

class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        std::vector<std::string> res;

        for (int d = 2; d <= n; d++){
            for (int n = 1; n < d; n++){
                if (findGCD(n,d) == 1){
                    res.push_back(std::to_string(n) + "/" + std::to_string(d));
                }
            }
        }

        return res;
    }
};