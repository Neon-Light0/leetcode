class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int modulo = 1e9 + 7;
        vector<long long> freq(26, 0);

        // Initialize frequency array
        for (char c : s) {
            freq[c - 'a']++;
        }

        // Apply t transformations
        for (int i = 0; i < t; i++) {
            vector<long long> new_freq(26, 0);
            for (int j = 0; j < 26; j++) {
                if (j == 25) { // 'z'
                    new_freq[0] = (new_freq[0] + freq[j]) % modulo; // 'z' -> 'a'
                    new_freq[1] = (new_freq[1] + freq[j]) % modulo; // 'z' -> 'b'
                } else {
                    new_freq[j + 1] = (new_freq[j + 1] + freq[j]) % modulo; // Shift to next letter
                }
            }
            freq = new_freq;
        }

        // Compute total length
        long long count = 0;
        for (long long val : freq) {
            count = (count + val) % modulo;
        }

        return static_cast<int>(count);
    }
};