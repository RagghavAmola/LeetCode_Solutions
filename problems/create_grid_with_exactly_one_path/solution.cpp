class Solution {
public:
    vector<string> createGrid(int m, int n) {
        string s;
        s.append(n,'#');
        vector<string> ans(m,s);
        int i=0;
        int j=0;
        while(i<m  and j<n){
            ans[i][j]='.';
            if(i==m-1 and j==n-1) break;
            else if (j==n-1) i++;
            else j++;
        }
        return ans;
    }
};