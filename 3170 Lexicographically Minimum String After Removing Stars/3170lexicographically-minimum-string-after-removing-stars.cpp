class Solution {
public:
    string clearStars(string s) {
        // Define the custom comparison function
        auto compare = [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
            if (a.first != b.first) {
                return a.first > b.first; 
            } else {
                return a.second < b.second;
            }
        };

        // Corrected priority queue declaration
        std::priority_queue<
            std::pair<char, int>,
            std::vector<std::pair<char, int>>,
            std::function<bool(const std::pair<char, int>&, const std::pair<char, int>&)>
        > pq(compare);

        for (int i = 0; i < s.size(); i++){
            char c = s[i];

            if (c != '*'){
                pq.push({c, i});
            } else {
                if (!pq.empty()){
                    auto val = pq.top();
                    s[val.second] = '*';
                    pq.pop();
                }
            }
        }

        std::string answer;

        for (int i = 0; i < s.size(); i++){
            if (s[i] != '*'){
                answer += s[i];
            }
        }

        return answer;;
    }
};