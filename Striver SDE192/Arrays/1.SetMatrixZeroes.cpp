class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int i,j,k,l;
        int m = matrix.size();
        int n = matrix[0].size();
        bool firstrow=false,firstcol=false;
        for(j=0;j<n;j++){
    if(matrix[0][j]==0){
        firstrow=true;
    }
}

for(i=0;i<m;i++){
    if(matrix[i][0]==0){
        firstcol=true;
    }
}
        for(i=1;i<m;i++){
            for(j=1;j<n;j++){
                if(matrix[i][j]==0){
                   matrix[0][j]=0;
                   matrix[i][0]=0;
                }
            }
        }
        for(i=1;i<m;i++){
            for(j=1;j<n;j++){
                if(matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(firstcol==true){
            for(i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
        if(firstrow==true){
            for(j=0;j<n;j++){
                matrix[0][j]=0;
            }
        }
        
        cout << "[";

for(int i = 0; i < m; i++) {

    cout << "[";

    for(int j = 0; j < n; j++) {

        cout << matrix[i][j];

        if(j != n - 1)
            cout << ",";
    }

    cout << "]";

    if(i != m - 1)
        cout << ",";
}

cout << "]";
    }
};