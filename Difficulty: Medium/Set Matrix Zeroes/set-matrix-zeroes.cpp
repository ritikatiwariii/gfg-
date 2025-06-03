// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        //lets make a temp array which keep track to the 
        //row size
        int m=mat.size();
        //col size
        int n=mat[0].size();
        //make a temp array to keep the track
        int row[m]={0};
        int col[n]={0};
        //travser in mat
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        //re iterate the array
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]|| col[j]){
                    //if this mark as 1 so
                    mat[i][j]=0;
                }
            }
         }
    }
};