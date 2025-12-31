class TextEditor {
private:
    std::string left;
    std::string right;

public:
    TextEditor() {
        left = "";
        right = "";
    }
    
    void addText(string text) {
        left += text;
    }
    
    int deleteText(int k) {
        if (k > left.size()){
            int temp = left.size();
            left = "";
            return temp;
        } else {
            left = left.substr(0, left.size() - k);
            return k;
        }
    }
    
    string cursorLeft(int k) {
        if (k > left.size()){
            right = left + right;
            left = "";
            return "";
        }

        right = left.substr(left.size() - k) + right;
        left.resize(left.size() - k);

        if (left.size() < 10){
            return left;
        } else {
            return left.substr(left.size() - 10);
        }
    }
    
    string cursorRight(int k) {
        if (k > right.size()){
            left = left + right;
            right = "";

            if (left.size() < 10){
                return left;
            } else {
                return left.substr(left.size() - 10);
            }   
        }

        left += right.substr(0, k);
        right = right.substr(k);

        if (left.size() < 10){
            return left;
        } else {
            return left.substr(left.size() - 10);
        }
    }
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */