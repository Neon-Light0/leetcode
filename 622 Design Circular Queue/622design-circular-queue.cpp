class MyCircularQueue {
private:
    int front;
    int len;
    int size;
    std::vector<int> queue;

public:
    MyCircularQueue(int k) {
        front = 0;
        len = 0;
        size = k;
        queue = std::vector(k, 0);
    }
    
    bool enQueue(int value) {
        if (len < size){
            queue[(front + len) % size] = value;
            len += 1;
            return true;
        } else {
            return false;
        }
    }
    
    bool deQueue() {
        if (len > 0){
            front = (front + 1) % size;
            len -= 1;
            return true;
        }

        return false;
    }
    
    int Front() {
        if (len == 0) return -1;

        return queue[front];
    }
    
    int Rear() {
        if (len == 0) return -1;

        return queue[(front + len - 1) % size];
    }
    
    bool isEmpty() {
        return len == 0;
    }
    
    bool isFull() {
        return len == size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */