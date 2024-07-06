class Solution {
public:
    int passThePillow(int n, int time) {
        int dist = n - 1;
        
        if ( (time / dist) % 2 == 0){
            return time % dist + 1;
        } else {
            return n - (time % dist);
        }
    }
};