class Solution {
public:
    int compareVersion(string version1, string version2) {
        std::vector<int> nums1;
        std::vector<int> nums2;

        std::string curStr = "";

        for (int i = 0; i < version1.size(); i++){
            if (version1[i] == '.'){
                nums1.emplace_back(stoi(curStr));
                curStr = "";
            } else {
                curStr += version1[i];

                if (i == version1.size() - 1){
                    nums1.emplace_back(stoi(curStr));
                    curStr = "";
                }
            }   
        }

        curStr = "";

        for (int i = 0; i < version2.size(); i++){
            if (version2[i] == '.'){
                nums2.emplace_back(stoi(curStr));
                curStr = "";
            } else {
                curStr += version2[i];

                if (i == version2.size() - 1){
                    nums2.emplace_back(stoi(curStr));
                    curStr = "";
                }
            }   
        }

        int len = nums1.size() > nums2.size() ? nums1.size() : nums2.size();

        for (int i = 0; i < len; i++){
            int num1 = i >= nums1.size() ? 0 : nums1[i];
            int num2 = i >= nums2.size() ? 0 : nums2[i];

            if (num2 > num1) {
                return -1;
            } else if (num2 < num1) {
                return 1;
            }
        }

        return 0;
    }
};