class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int len = A.size();
        std::vector<int> answer(len);
        uint64_t a = 0, b = 0;

        for (int i = 0; i < len; i++){
            uint64_t one = 1;
            a = a | (one << A[i]);
            b = b | (one << B[i]);
            uint64_t c = a & b;
            int count = 0;

            while (c > 0){
                if ( (c & 1) == 1){
                    count += 1;
                }

                c = c >> 1;
            }

            answer[i] = count;
        }

        return answer;
    }
};