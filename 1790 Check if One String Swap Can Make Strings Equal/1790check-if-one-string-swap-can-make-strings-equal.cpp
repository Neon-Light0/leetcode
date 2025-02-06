class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int len = s1.size();
        int count = 0;
        int index1 = 0, index2 = 0;

        for (int i = 0; i < len; i++){
            if (s1[i] != s2[i]){
                count += 1;
                if (count == 1){
                    index1 = i;
                } else if (count == 2){
                    index2 = i;
                }
            }

            if (count > 2) return false;
        }

        if (count == 0) {
            return true;
        } else if (count == 1){
            return false;
        } else if (s1[index1] == s2[index2] && s1[index2] == s2[index1]){
            return true;
        }

        return false;
    }
};