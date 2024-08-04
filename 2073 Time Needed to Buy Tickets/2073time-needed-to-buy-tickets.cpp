class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int len = tickets[k];
        int time = 0;

        for (int i = 0; i < len; i++){
            for (int j = 0; j < tickets.size(); j++){
                if (tickets[j] > 0){
                    time += 1;
                }

                if (i == len - 1 && j == k) break;

                tickets[j] -= 1;
            }
        }

        return time;
    }
};