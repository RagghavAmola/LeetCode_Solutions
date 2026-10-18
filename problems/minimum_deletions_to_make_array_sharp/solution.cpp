class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int ops=0;
        stack<int> s;
        for(auto x: nums){
            if(s.empty() || x!=s.top()) s.push(x);
            else ops++;
        }
        return ops;
    }
};