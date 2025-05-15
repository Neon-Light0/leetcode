class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        std::vector<int> group1;
        int cur1 = 0;
        std::vector<int> group2;
        int cur2 = 1;

        for (int i = 0; i < groups.size(); i++){
            if (groups[i] == cur1){
                group1.push_back(i);
                cur1 = cur1 == 0 ? 1 : 0;
            }

            if (groups[i] == cur2){
                group2.push_back(i);
                cur2 = cur2 == 0 ? 1 :0;
            }
        }

        std::vector<std::string> answer;
        std::vector<int>* longest;

        if (group1.size() > group2.size()){
            longest = &group1;
        } else {
            longest = &group2;
        }

        for (int i = 0; i < longest->size(); i++){
            answer.push_back(words[(*longest)[i]]);
        }

        return answer;
    }
};