class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        bool isCounted = false;

        for (char& c : s){
            if (!isspace(c) ){
                if (!isCounted){
                    count++;    
                    isCounted  = true;
                }
            } else {
                isCounted = false;
            }
        }

        return count;
    }
};