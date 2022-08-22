class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        int s = 0;
        int e = (row*col)-1;
        
        while(s<=e){
            int mid = s + (e-s)/2;
            if(matrix[mid/col][mid%col] == target)
                return true;
            if(matrix[mid/col][mid%col] < target)
                s = mid+1;
            else
                e = mid-1;
        }
        
        return false;
    }
};