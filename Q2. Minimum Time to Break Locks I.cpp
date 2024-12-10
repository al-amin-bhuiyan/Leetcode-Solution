class Solution {
private:

void findMinTime2(
    const vector<int>& strength, int K, 
    vector<bool>& visited, int currentX, int currentTime, int& minTime, int depth) {
    
    if (depth == strength.size()) {
        
        minTime = min(minTime, currentTime);
        return;
    }

    for (int i = 0; i < strength.size(); i++) {
        if (!visited[i]) {
            visited[i] = true;

         
            int lock_strength = strength[i];
            int time_needed = (lock_strength + currentX - 1) / currentX; // 

            
            findMinTime2(strength, K, visited, currentX + K, currentTime + time_needed, minTime, depth + 1);

          
            visited[i] = false;
        }
    }
}
public:
    int findMinimumTime(vector<int>& strength, int K) {
        int n = strength.size();
    vector<bool> visited(n, false);
    int minTime = INT_MAX;

    findMinTime2(strength, K, visited, 1, 0, minTime, 0);
    return minTime;
 //  cout<<minTime<<nl;
        
    }
};