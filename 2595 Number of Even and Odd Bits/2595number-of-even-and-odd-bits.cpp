class Solution {
public:
    vector<int> evenOddBit(int n) {
        int index = 0;
        int odd = 0, even = 0;
        
        while (n > 0){
            if (n & 1 == 1){
                if (index % 2){
                    odd++;
                } else {
                    even++;
                }
            }
            
            n = n >> 1;
            index++;
        }
        
        return {even, odd};
    }
};