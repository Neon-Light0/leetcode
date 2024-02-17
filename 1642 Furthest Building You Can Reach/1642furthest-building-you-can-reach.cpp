class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int curPos = 0;
        std::priority_queue<int> set;
        
        for (std::size_t i = 1; i < heights.size(); i++){
            int heightDiff = heights[i] - heights[i - 1];
            
            if (heightDiff > 0){
                bricks -= heightDiff;
                set.push(heightDiff);
                
                if (bricks < 0 && ladders > 0){
                    ladders -= 1;
                    
                    bricks += set.top();
                    set.pop();
                }
                
                if (bricks < 0){
                    break;
                } else {
                    curPos = i;
                }
            } else {
                curPos = i;
            }
        }
        
        return curPos;
    }
};