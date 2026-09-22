class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        for(int i = 0; i < tickets.size(); i++) {
            q.push(i);
        }
        int turns = 0;
        while(tickets[k] > 0) {
            int front = q.front();
            q.pop();
            tickets[front]--;
            if (tickets[front] > 0) {
                q.push(front);
            }
            turns++;
        }
        return turns;
    }
};