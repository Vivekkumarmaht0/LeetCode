class Solution {
public:
    string predictPartyVictory(string senate) {
        deque<int> dq; 
        deque<int> q;  
        int n = senate.size();

        for(int i = 0; i < n; i++) {
            if (senate[i] == 'R') {
                dq.push_back(i);
            } else {
                q.push_back(i);
            }
        }

        while(!dq.empty() && !q.empty()) {

            if (dq.front() < q.front()) {
                int r = dq.front();
                dq.pop_front();
                q.pop_front();
                dq.push_back(r + n);
            }
            else {
                int d = q.front();
                q.pop_front();
                dq.pop_front();
                q.push_back(d + n);
            }
        }

        return dq.empty() ? "Dire" : "Radiant";
    }
};