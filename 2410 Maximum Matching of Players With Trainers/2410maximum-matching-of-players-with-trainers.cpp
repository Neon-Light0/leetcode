class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        std::sort(players.begin(), players.end());
        std::sort(trainers.begin(), trainers.end());

        int count = 0;

        for (int i = 0, j = 0; i < players.size() && j < trainers.size();){
            if (players[i] <= trainers[j]){
                i += 1;
                count += 1;
            }

            j += 1;
        }

        return count;
    }
};