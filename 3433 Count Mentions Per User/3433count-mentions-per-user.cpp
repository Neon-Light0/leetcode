class Solution {
private:
    std::vector<std::string> split(const std::string& s){
        std::vector<std::string> res;
        std::string current = "";

        for (const auto c : s){
            if (c == ' '){
                res.push_back(current);
                current = "";
            } else {
                current += c;
            }
        }

        if (!current.empty()){
            res.push_back(current);
        }

        for (auto& id : res){
            id = id.substr(2);
        }

        return res;
    }

public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        std::vector<int> counts(numberOfUsers, 0);
        std::vector<int> onlineStatus(numberOfUsers, -1);
        std::sort(events.begin(), events.end(), [](const std::vector<std::string>& a, const std::vector<std::string>& b){
            if (std::stoi(a[1]) == std::stoi(b[1])){
                return a[0] > b[0];
            }

            return std::stoi(a[1]) < std::stoi(b[1]);
        });

        for (const auto& event : events){
            std::string message = event[0];
            int time = std::stoi(event[1]);

            if (message == "MESSAGE"){
                std::string users = event[2];

                if (users == "ALL"){
                    for (auto& count : counts){
                        count += 1;
                    }
                } else if (users == "HERE"){
                    for (int i = 0; i < onlineStatus.size(); i++){
                        if ( onlineStatus[i] == -1 || (onlineStatus[i] + 60) <= time){
                            counts[i] += 1;
                        }
                    }
                } else {
                    std::vector<std::string> userIdStrs = split(users);

                    for (const auto& userIdStr : userIdStrs){
                        int id = std::stoi(userIdStr);
                        counts[id] += 1;
                    }
                }
            } else { //OFFLINE
                int id = std::stoi(event[2]);
                onlineStatus[id] = time;
            }
        }

        return counts;
    }
};