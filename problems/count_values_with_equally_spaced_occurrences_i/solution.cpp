class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int cnt=0;
        unordered_map<int,int> freq;
        for(int x:nums) freq[x]++;
        for(int i=0;i<nums.size();i++){
            if(freq[nums[i]]==3){
                int chkelem=nums[i];
                int ind=i;
                int ind2=-1,ind3=-1;
                for(int j=ind+1;j<nums.size();j++){
                    if(nums[j]==chkelem && ind2==-1){
                        ind2=j;
                        continue;
                    } 
                    else if(nums[j]==chkelem && ind2!=-1){
                        ind3=j;
                        if(ind2-ind==ind3-ind2) cnt++;
                        break;
                    }
                    else continue;
                }
            }    
        }
        return cnt;
    }
};