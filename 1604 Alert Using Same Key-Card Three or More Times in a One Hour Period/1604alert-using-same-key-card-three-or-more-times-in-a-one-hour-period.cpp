class Solution {
private:
    int getTimeDiff(const std::string& t1, const std::string& t2){
        int h1 = std::stoi(t1.substr(0, 2));
        int h2 = std::stoi(t2.substr(0, 2));
        int m1 = std::stoi(t1.substr(3));
        int m2 = std::stoi(t2.substr(3));

        return std::abs( (h1 * 60 + m1) - (h2 * 60 + m2));
    }

public:
    vector<string> alertNames(vector<string>& keyName, vector<string>& keyTime) {
        std::vector<std::string> offenders;
        std::unordered_map<std::string, std::vector<std::string>> nameTime;
        
        for (int i = 0; i < keyName.size(); i++){
            nameTime[keyName[i]].push_back(keyTime[i]);
        }

        for (auto& [key, val] : nameTime){
            std::sort(val.begin(), val.end());

            for (int i = 0; i + 2 < val.size(); i++){
                std::cout << val.size() << std::endl;

                if (getTimeDiff(val[i], val[i+2]) <= 60){
                    offenders.push_back(key);
                    break;
                }
            }
        }

        std::sort(offenders.begin(), offenders.end());
        return std::move(offenders);
    }
};