class RandomizedSet {
private:
    std::unordered_set<int> set;

public:
    RandomizedSet() {
            
    }
    
    bool insert(int val) {
        bool hasVal = set.contains(val);
        
        if (!hasVal) set.insert(val);
        
        return !hasVal;
    }
    
    bool remove(int val) {
        bool hasVal = set.contains(val);
        
        if (hasVal) set.erase(val);
        
        return hasVal;
    }
    
    int getRandom() {
        auto iter = set.begin();
        std::advance(iter, rand() % set.size());
        return *iter;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */