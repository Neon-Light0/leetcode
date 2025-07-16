class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int evenLen = 0;
        int oddLen = 0;
        int oddEvenLen = 0;
        int evenOddLen = 0;
        bool oToggle = true; //true for odd, false for even
        bool eToggle = true;


        for (const auto& num : nums){
            if (num % 2){
                evenLen += 1;

                if (!oToggle){
                    oddEvenLen += 1;
                    oToggle = !oToggle;
                }

                if (eToggle){
                    evenOddLen += 1;
                    eToggle = !eToggle;
                }

            } else {
                oddLen += 1;

                if (oToggle){
                    oddEvenLen += 1;
                    oToggle = !oToggle;
                }

                if (!eToggle){
                    evenOddLen += 1;
                    eToggle = !eToggle;
                }
            }
        }

        return std::max({evenLen, oddLen, oddEvenLen, evenOddLen });
    }
};