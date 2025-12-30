class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++) nums1[m+i]=nums2[i];
        for(int j=m;j<m+n;j++){
            int idx=j;
            for(int k=j-1;k>-1;k--){
                if(nums1[k]>nums1[idx]){
                    swap(nums1[k],nums1[idx]);
                    idx=k;
                }
            }
        }
    }
};