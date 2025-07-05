class Solution {
public:
    int shipdays(vector<int>& arr, int cap){
        int sum=0;
        int days=1;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]<=cap)
                sum+=arr[i];
            else{
                days+=1;
                sum=arr[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            if(shipdays(weights,mid)<=days) high=mid-1;
            else low=mid+1;
        }
        return low;
    }   
};