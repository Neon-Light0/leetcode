class Solution {
private:
    bool getIsAlNum(const std::string& s){
        for (const char& c : s){
            if (!std::isalnum(c) && c != '_'){
                return false;
            }
        }

        return true;
    }

public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        std::vector<std::pair<std::string, std::string>> res;
        std::size_t n = code.size();
        std::unordered_map<std::string, int> businessCategories = {{"electronics", 1}, {"grocery",2} , {"pharmacy",3}, {"restaurant", 4}};

        for (std::size_t i = 0; i < n; i++){
            if (!code[i].empty() && getIsAlNum(code[i]) &&
                businessCategories.find(businessLine[i]) != businessCategories.end() &&
                isActive[i]){
                
                res.push_back({code[i], businessLine[i]});
            }
        }

        std::sort(res.begin(), res.end(), [&](const std::pair<std::string,std::string>& a, const std::pair<std::string, std::string>& b){
            if (businessCategories[a.second] == businessCategories[b.second]){
                return a.first < b.first;
            } else {
                return businessCategories[a.second] < businessCategories[b.second];
            }
        });

        std::vector<std::string> ans;
        for (auto& a : res){
            ans.push_back(a.first);
        }

        return ans;
    }
};