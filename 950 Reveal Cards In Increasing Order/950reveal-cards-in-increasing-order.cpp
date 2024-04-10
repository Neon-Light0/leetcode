class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        std::vector<int> answer;
        std::deque<int> queue;
        
        std::sort(deck.begin(), deck.end());
        
        for (int i = deck.size() - 1; i >= 0; i--){
            if (!queue.empty()){
                int back = queue.back();
                queue.pop_back();
                queue.push_front(back);
            }
            
            queue.push_front(deck[i]);
        }
        
        while (!queue.empty()){
            answer.push_back(queue.front());
            queue.pop_front();
        }
        
        return answer;
    }
};