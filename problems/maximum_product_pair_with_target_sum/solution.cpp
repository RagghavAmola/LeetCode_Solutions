class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        vector<pair<int,int>> pairs;
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            int comp=target-nums[i];
            if(hash.find(comp)!=hash.end()){
                pairs.push_back(nums[i]>comp?make_pair(i,hash[comp]):make_pair(hash[comp],i)); 
            }        
            hash[nums[i]]=i;
        }
        int maxprod=INT_MIN;
        for(auto p:pairs){
            if(maxprod<nums[p.first]*nums[p.second] && nums[p.first]!=nums[p.second]){
                maxprod=nums[p.first]*nums[p.second];
                ans[0]=p.first;
                ans[1]=p.second;
            }
            
        }
        return ans;
    }
};