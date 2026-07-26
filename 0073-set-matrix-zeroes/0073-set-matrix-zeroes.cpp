class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i,j;
        vector<int>rows(m,0);
        vector<int>cols(n,0);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(matrix[i][j]==0){
                    rows[i]=1;
                    cols[j]=1;
                }
            
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(rows[i]==1||cols[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};