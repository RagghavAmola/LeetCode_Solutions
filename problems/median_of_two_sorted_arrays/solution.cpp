class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int low=0;
        int halfsize=(nums1.size()+nums2.size()+1)/2;
        int high=nums1.size();
        if(nums1.size()>nums2.size()) return findMedianSortedArrays(nums2,nums1);
        while(low<=high){
            int mid=(low+high)/2;
            int l1=INT_MIN;
            int l2=INT_MIN;
            int r1=INT_MAX;
            int r2=INT_MAX;
            if(mid-1>=0)l1=nums1[mid-1];  
            if(halfsize-mid-1>=0)l2=nums2[halfsize-mid-1];
            if(mid<nums1.size())r1=nums1[mid];
            if(halfsize-mid<nums2.size())r2=nums2[halfsize-mid];
            if((l1<=r2)&&(l2<=r1)){
                if((nums1.size()+nums2.size())%2==1) return max(l1,l2);
                return (double)(max(l1,l2)+min(r1,r2))/2.0;
            }
            else if(l2>r1) low=mid+1;
            else if(l1>r2) high=mid-1;
        }
        return 0;
    }
};