// User function template for C++

/* matrix : given input matrix, you are require
 to change it in place without using extra space */
void rotate(vector<vector<int> >& mat) {
    // Your code goes here
    int n=mat.size();
   vector<vector<int>> temp(n, vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[j][n-1-i]=mat[i][j];
        }
       
    }
     mat=temp;
}
