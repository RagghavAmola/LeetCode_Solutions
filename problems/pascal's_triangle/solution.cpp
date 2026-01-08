class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> mat;
        for(int i=1;i<=numRows;i++){
            vector<int> v;
            v.emplace_back(1);
            long long int ans=1;
            for(int j=1;j<i;j++){
                ans*=(i-j);
                ans/=j;
                v.emplace_back(ans);
            }
            mat.emplace_back(v);
        }
        return mat;
    }
};