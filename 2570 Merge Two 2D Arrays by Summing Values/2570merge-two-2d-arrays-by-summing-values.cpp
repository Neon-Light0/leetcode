class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        std::vector<std::vector<int>> answer;
        int p1 = 0, p2 = 0;
        int len1 = nums1.size(), len2 = nums2.size();

        while (p1 < len1 || p2 < len2){
            int key1 = p1 < len1 ? nums1[p1][0] : INT_MAX, key2 = p2 < len2 ? nums2[p2][0] : INT_MAX;
            int val1 = p1 < len1 ? nums1[p1][1] : INT_MAX, val2 = p2 < len2 ? nums2[p2][1] : INT_MAX;
            
            if (key1 < key2){
                answer.push_back({key1, val1} );
                p1 +=1;
            } else if (key1 > key2){
                answer.push_back({key2, val2});
                p2 +=1;
            } else {
                answer.push_back({key1, val1 + val2});
                p1 += 1;
                p2 += 1;
            }
        }


        return answer;
    }
};