class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        
        int count = 0;
        int j = 0;
        
        for (int i = 0; i < g.size(); i++){
            while (j < s.size() && g[i] > s[j]){
                j++;
            }
            
            if (j < s.size() && s[j] >= g[i]){
                count++;
                j++;
            }
        }
        
        return count;
    }
};