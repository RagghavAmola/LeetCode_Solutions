class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();j++){
                int k=j+1;
                int l=nums.size()-1;
                while(k<l){
                long long int sum=(long long int)nums[i]+(long long int)nums[j]+(long long int)nums[k]+(long long int)nums[l];
                if(sum>target) l--;
                else if(sum<target) k++;
                else{
                    vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                    s.insert(temp); 
                    k++;
                    l--;
                    while(k<l && nums[k]==nums[k-1]) k++;
                    while(k<l && nums[l]==nums[l+1]) l--;
                }   
                }
            }
        }
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};