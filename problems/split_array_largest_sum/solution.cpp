class Solution {
public:
    int subarrcnt(int sumlt,vector<int>& arr){
        int subarr=1;
        int splitsum=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]+splitsum<=sumlt)
                splitsum+=arr[i];
            else{
                subarr++;
                splitsum=arr[i];
            }
        }
        return subarr;
    }
    int splitArray(vector<int>& nums, int k) {
        if(k>nums.size()) return -1;
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            if(subarrcnt(mid,nums)<=k) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};