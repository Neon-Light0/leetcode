class Solution {
public:
    bool isPathCrossing(string path) {
        std::unordered_set<std::string> mySet;
        int x = 0;
        int y = 0;
        
        mySet.insert("0,0");
        
        for (char& c : path){
            if (c == 'N'){
                y++;
            } else if (c == 'S'){
                y--;
            } else if (c == 'E'){
                x++;
            } else if (c == 'W'){
                x--;
            }
            
            std::string pos = std::to_string(x) + ',' + std::to_string(y);
            
            if (mySet.contains(pos)) return true;
            
            mySet.insert(pos);
        }
        
        return false;
    }
};