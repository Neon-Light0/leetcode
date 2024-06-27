class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        if (x == 1) return 1;
        
        int answer = 2;
        
        while (answer * answer <= x){
            answer++;
        }
        
        return answer  - 1;
    }
};