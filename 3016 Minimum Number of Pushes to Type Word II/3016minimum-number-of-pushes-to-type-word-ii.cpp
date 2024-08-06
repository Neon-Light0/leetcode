class Solution {
public:
    int minimumPushes(string word) {
        std::vector<int> freq(26, 0);

        for (char& c : word){
            freq[c - 'a'] += 1;
        }

        std::sort(freq.begin(), freq.end(), std::greater<int>());

        int count = 0;
        int index = 0;

        while (index < freq.size() && freq[index]){
            count += freq[index] * (1 + index / 8);
            index++;
        }

        return count;
    }
};