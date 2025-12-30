class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums;
        for(int i=0;i<nums1.size();i++){
            if(find(nums.begin(),nums.end(),nums1[i])!=nums.end()) continue;
            if(find(nums1.begin(),nums1.end(),nums1[i])!=nums1.end() && find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end())
                nums.emplace_back(nums1[i]);
        }
        return nums;
    }
};