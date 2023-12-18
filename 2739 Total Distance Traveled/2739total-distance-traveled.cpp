class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int count = 0;
        
        while (mainTank > 0) {
            int consumed = std::min(5, mainTank);
            count += consumed;
            
            mainTank -= consumed;
            
            if (additionalTank > 0 && consumed == 5 ){
                mainTank += 1;
                additionalTank -= 1;
            }
        }
        
        return count * 10;
    }
};