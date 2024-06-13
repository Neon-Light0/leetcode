class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int count = 0;
        
        std::sort(seats.begin(), seats.end());
        std::sort(students.begin(), students.end());
        
        for (std::size_t i = 0; i < seats.size(); i++){
            count += std::abs(seats[i] - students[i]);
        }
        
        return count;
    }
};