class Spreadsheet {
private:
    std::unordered_map<char, std::vector<int>> sheet;

public:
    Spreadsheet(int rows) {
        for (int i = 0; i < 26; i++){
            sheet['A' + i] = std::vector<int>(rows, 0);
        }
    }
    
    void setCell(const string& cell, int value) {
        sheet[cell[0]][std::stoi(cell.substr(1)) - 1] = value;
    }
    
    void resetCell(const string& cell) {
        sheet[cell[0]][std::stoi(cell.substr(1)) - 1] = 0;
    }
    
    int getValue(const string& formula) {  
        std::size_t pos = formula.find("+");
        std::string val1 = formula.substr(1, pos - 1);
        std::string val2 = formula.substr(pos + 1);
        int num1 = 0, num2 = 0;

        if (std::isalpha(val1[0])){
            num1 = sheet[val1[0]][std::stoi(val1.substr(1)) - 1];
        } else {
            num1 = std::stoi(val1);
        }

        if (std::isalpha(val2[0])){
            num2 = sheet[val2[0]][std::stoi(val2.substr(1)) - 1];
        } else {
            num2 = std::stoi(val2);
        }

        return num1 + num2;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */