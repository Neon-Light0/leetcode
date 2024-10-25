class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        std::sort(folder.begin(), folder.end());
        std::vector<string> answer;

        for (int i = 0; i < folder.size(); i++){
            string& curFolder = folder[i];

            answer.push_back(curFolder);

            for (int j = i + 1; j < folder.size(); j++ ){
                string& nextFolder = folder[j];

                if (nextFolder.find(curFolder + "/") == 0){
                    i++;
                } else {
                    break;
                }
            }
        }

        return answer;
    }
};