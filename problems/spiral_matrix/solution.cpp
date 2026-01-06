class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0,top=0;
        int right=n-1;
        int bot=m-1;
        vector<int> v;
        while(top<=bot && left<=right){
            for(int i=left;i<=right;i++){
                v.emplace_back(matrix[top][i]);
            }
            top++;
            for(int j=top;j<=bot;j++){
                v.emplace_back(matrix[j][right]);
            }
            right--;
            if(top<=bot){
                for(int i=right;i>=left;i--){
                v.emplace_back(matrix[bot][i]);
                }
                bot--;
            }
            if(left<=right){
                for(int j=bot;j>=top;j--){
                v.emplace_back(matrix[j][left]);
                }
                left++;
            }
        }
        return v;   
    }
};