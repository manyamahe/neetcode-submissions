class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int l=0;
        int r=row-1;
        bool ans=false;
        while(l<=r){
            int mid =l+(r-l)/2;
            if(target<=matrix[mid][col-1]&&target>=matrix[mid][0]){
                 int low=0,high=col-1;
                 while(low<=high){
                    int av=low+(high-low)/2;
                    if(matrix[mid][av]==target){
                        
                        return true;
                    }else if(matrix[mid][av]>target){
                        high=av-1;
                    }else{
                        low=av+1;
                    }
                 }
                return false;
            }else if(target<matrix[mid][0]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return false;
    }
};
