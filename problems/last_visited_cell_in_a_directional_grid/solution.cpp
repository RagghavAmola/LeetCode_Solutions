class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int r=0, c=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> v(m,vector<int>(n,0));
        v[r][c]=1;
        bool stop=false;
        while(!stop){
            switch (grid[r][c]){
                case 'L':
                    if(c==0 || v[r][c-1]==1) stop=true;
                    else{
                        c--;
                        v[r][c]=1;
                    }
                    break;
                case 'R':
                    if(c==n-1 || v[r][c+1]==1) stop=true;
                    else{
                        c++;
                        v[r][c]=1;
                    }                       
                    break;
                case 'U':
                    if(r==0 || v[r-1][c]==1) stop=true;
                    else{
                        r--;
                        v[r][c]=1;
                    }
                    break;
                case 'D':
                    if(r==m-1 || v[r+1][c]==1) stop=true;
                    else{
                        r++;
                        v[r][c]=1;
                    }
                    break;
            }
        }
        return{r,c};
    }
};