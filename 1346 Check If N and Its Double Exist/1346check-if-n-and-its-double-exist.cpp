class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        std::unordered_map<int, std::unordered_set<int>> map;

        for (int i = 0; i < arr.size(); i++){
            map[arr[i]].insert(i);
        }

        for (int i = 0; i < arr.size(); i++) {
            int doubleNum = arr[i] * 2;

            if (map.contains(doubleNum) ){
                if (map[doubleNum].size() > 1){
                    return true;
                } if (!map[doubleNum].contains(i)){
                    return true;
                }
            }
        }

        return false;
    }
};