class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int r=rowIndex+1;
        vector<int> v;
        v.emplace_back(1); 
        long long int ans=1;
        for(int i=1;i<r;i++){
                ans*=(r-i);
                ans/=i;
                v.emplace_back(ans);
        }
        return v; 
    }
};