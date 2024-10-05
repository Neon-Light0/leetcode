class Solution {
public:
    int minOperations(vector<string>& logs) {
        int nOpts = 0;

        for (std::string& log : logs){
            if (log == "./"){
                continue;
            } else if (log == "../"){
                nOpts = std::max(0, nOpts - 1);
            } else {
                nOpts += 1;
            }
        }

        return nOpts;
    }
};