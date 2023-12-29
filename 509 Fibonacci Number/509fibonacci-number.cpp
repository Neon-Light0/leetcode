class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        
        int n0 = 0;
        int n1 = 1;
        
        for (std::size_t i = 1; i < n; i++){
            int temp = n1;
            n1 = n0 + n1;
            n0 = temp;
        }
        
        return n1;
    }
};