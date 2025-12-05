class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        std::unordered_map<int, long long> coolDownMap;
        long long count = 0;

        for (int i = 0; i < tasks.size(); i++){
            if (!coolDownMap.contains(tasks[i])){
                count += 1;
            } else if (count > coolDownMap[tasks[i]]){
                count += 1;
            } else {
                count += coolDownMap[tasks[i]] - count + 1;
            }

            coolDownMap[tasks[i]] = count + space;
        }   

        return count;
    }
};