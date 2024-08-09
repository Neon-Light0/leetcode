class Solution {
public:
    int longestString(int x, int y, int z) {
        int count = z;

        count += std::min(x, y);
        
        if (std::min(x, y) + 1 <= x || std::min(x, y) + 1 <= y ){
            count += std::min(x, y) + 1;
        } else{
            count += std::min(x, y);
        }

        return count * 2;
    }
};