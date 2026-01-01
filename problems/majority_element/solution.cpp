class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0,curr=0;
        for(int x:nums){
            if(cnt==0) curr=x;
            cnt+= (x==curr)? 1:-1;
        }
        return curr;
    }
};