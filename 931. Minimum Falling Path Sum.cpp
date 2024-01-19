class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=n-2;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int mn = INT_MAX;
                if(j+1 < m){
                    mn = min(mn, matrix[i][j] + matrix[i+1][j+1]);
                }

                mn = min(mn, matrix[i][j] + matrix[i+1][j]);

                if(j - 1 >= 0){
                    mn = min(mn, matrix[i][j] + matrix[i+1][j-1]);
                }

                matrix[i][j] = mn;
            }
        }

        int minval = INT_MAX;
        for(int j=0;j<m;j++){
            minval = min(minval, matrix[0][j]);
        }

        return minval;
    }
};