class Solution {
public:
    int maxOperations(string s) {
        int count = 0;
        int nOnes = 0;

        for (int i = 0; i < s.size(); i++){
            if (s[i] == '0'){
                while (i + 1 < s.size() && s[i+1] != '1'){
                    i++;
                }

                count += nOnes;
            } else {
                nOnes += 1;
            }
        }

        std::cout << s << std::endl;
        return count;
    }
};