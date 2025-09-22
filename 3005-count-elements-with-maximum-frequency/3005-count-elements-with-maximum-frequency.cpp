class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int>freq;
        for(int i: nums){
            freq[i]++;
        }
        int num = 0;
        int count=0;
        vector<int>fre;
        for(auto &j: freq) {
            fre.push_back(j.second);
        }
        sort(fre.rbegin(),fre.rend());
        int fir=fre[0];
        for(int i=0;i<fre.size();i++){
            if(fre[i]== fir) count++;
        }        
        if(fre.size() == 1){
            return fre[0];
        }
        // cout<<num<<" "<<count;
        return fir*count;
    }
};