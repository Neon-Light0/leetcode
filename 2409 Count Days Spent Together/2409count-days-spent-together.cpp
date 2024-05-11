class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        int aliceArriveMonth = std::stoi(arriveAlice.substr(0, 2));
        int aliceArriveDay = std::stoi(arriveAlice.substr(3));
        int bobArriveMonth = std::stoi(arriveBob.substr(0,2));
        int bobArriveDay = std::stoi(arriveBob.substr(3));
        
        int aliceLeaveMonth = std::stoi(leaveAlice.substr(0, 2));
        int aliceLeaveDay = std::stoi(leaveAlice.substr(3));
        int bobLeaveMonth = std::stoi(leaveBob.substr(0,2));
        int bobLeaveDay = std::stoi(leaveBob.substr(3));
        
        int earliestMonth, earliestDay, latestMonth, latestDay;
        
        if (aliceArriveMonth < bobArriveMonth || (aliceArriveMonth == bobArriveMonth && aliceArriveDay < bobArriveDay) ){
            earliestMonth = bobArriveMonth;
            earliestDay = bobArriveDay;
        } else {
            earliestMonth = aliceArriveMonth;
            earliestDay = aliceArriveDay;
        }
        
        if (aliceLeaveMonth < bobLeaveMonth || (aliceLeaveMonth == bobLeaveMonth && aliceLeaveDay < bobLeaveDay) ){
            latestMonth = aliceLeaveMonth;
            latestDay = aliceLeaveDay;
        } else {
            latestMonth = bobLeaveMonth;
            latestDay = bobLeaveDay;
        }
        
        int days1 = 0, days2 = 0;
        
        for (int i = 0; i < earliestMonth - 1; i++){
            days1 += days[i];
        }
        
        days1 += earliestDay;
        
        for (int i = 0; i < latestMonth - 1; i++){
            days2 += days[i];
        }
        
        days2 += latestDay;
        
        if (days2 < days1) return 0;
        
        return days2 - days1 + 1;
    }
};