class Solution {
public:
    bool searchrow(vector<int>row,int target){
	    int lowi=0;
        int highi=row.size()-1;
	    while(lowi<=highi){
		    int midi=(lowi+highi)/2;
	        if(row[midi]==target) return true;
	        else if(row[midi]>target) highi=midi-1;
	        else lowi=midi+1;
	    }
	return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int high=matrix.size()-1;
        while(low<=high){
	        int mid=(low+high)/2;
	        if((target>=matrix[mid][0])&&(target<=matrix[mid][matrix[mid].size()-1])) 
                return searchrow(matrix[mid],target); 
	        else if(target>matrix[mid][matrix[mid].size()-1]) low=mid+1;
            else high=mid-1;
        }
    return false;
    }
};