class NumberContainers {
private:
    std::unordered_map<int, std::set<int>> indices;
    std::unordered_map<int, int> container;

public:
    NumberContainers() {    
    }
    
    void change(int index, int number) {
        if (!container.contains(index)){
            container[index] = number;
            indices[number].insert(index);
        } else {
            int curNum = container[index];
            indices[curNum].erase(index);
            container[index] = number;
            indices[number].insert(index);
        }
    }
    
    int find(int number) {
        if (indices.contains(number) && !indices[number].empty()){
            return *indices[number].begin();
        } else {
            return -1;
        }
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */