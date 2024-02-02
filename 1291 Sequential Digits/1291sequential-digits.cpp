class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        std::vector<int> answer;
        int n = std::to_string(low).size();
        int currentVal = low;
        int start = 1;
        
        while (currentVal <= high){
            currentVal = 0;
            
            for (int i = 0; i < n; i++){
                currentVal = currentVal * 10 + start + i;
            }
            
            n += (start + n) / 10;
            start = (start + 1) <= (10 - n)? start + 1 : 1;
            
            if (currentVal >= low && currentVal <= high) answer.emplace_back(currentVal);
        }
        
        return answer;
    }
};