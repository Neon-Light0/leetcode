class Solution {
public:
    int findComplement(int num) {
        int answer = 0;
        int index = 0;

        while (num != 0){
            if ( (num & 1) == 0){
                answer += 1 << index;
            }

            index++;
            num = num >> 1;
        }

        return answer;
    }
};