class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        std::vector<int> answer(arr.size(), 0);
        int curMax = INT_MIN;
        
        for (int i = arr.size() - 2; i > -1; i--){
            curMax = std::max(curMax, arr[i + 1]);
            answer[i] = curMax;
        }
        
        answer[arr.size() - 1] = -1;
        
        return answer;
    }
};