class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int n=nums.size();
        vector<int> ans(n,-1);
        for(int x=0;x<2;x++){
            for(int i=n-1;i>=0;i--){
                    while(!s.empty() && nums[i]>=s.top()) s.pop();
                    if(!s.empty()) ans[i]=s.top();
                    s.push(nums[i]);
            } 
        }
        return ans;
        }
};