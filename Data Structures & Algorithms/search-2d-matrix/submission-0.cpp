class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = 0;
        int r = m*n-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            // int lrow = l/m;
            // int lcol = l%m;
            // int rrow = r/n;
            // int rcol = r%m;
            int midrow = mid/m;
            int midcol = mid%m;
            int midval = matrix[midrow][midcol];
            if(midval ==target)return true;
            else if(midval <target)l =mid+1;
            else r = mid-1;

        }
        return false;
        
    }
};
