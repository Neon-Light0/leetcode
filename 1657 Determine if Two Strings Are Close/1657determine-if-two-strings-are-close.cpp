class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) return false;
        
        std::set<char> set1;
        std::set<char> set2;
        std::vector<int> arr1(26, 0);
        std::vector<int> arr2(26, 0);
        
        for (int i = 0; i < word1.size(); i++){
            char& c1 = word1[i];
            char& c2 = word2[i];
            
            set1.insert(c1);
            set2.insert(c2);
            arr1[c1 - 'a'] += 1;
            arr2[c2 - 'a'] += 1;
        }
        
        std::sort(arr1.begin(), arr1.end());
        std::sort(arr2.begin(), arr2.end());
        
        return set1 == set2 && arr1 == arr2;
    }
};