class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        std::sort(capacity.begin(), capacity.end(), std::greater<int>());
        int nBoxes = 0;
        int nApples = 0;

        for (int i = 0; i < apple.size(); i++){
            nApples += apple[i];
        }

        for (int i = 0; i < capacity.size(); i++){
            if (nApples > 0){
                nBoxes += 1;
            } else {
                break;
            }

            nApples -= capacity[i];
        }

        return nBoxes;
    }
};