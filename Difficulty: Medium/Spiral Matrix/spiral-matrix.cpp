class Solution {

  public:
    int findK(vector<vector<int>> &a, int n, int m, int k) {
        // Your code goes here
        vector<int>temp;
        int left=0;
        int top=0;
        int ans;
        int right=m-1;
        int bottom=n-1;
        while(top<=bottom && left<=right){
            //left to right
            for(int i=left;i<=right;i++){
                temp.push_back(a[top][i]);
                
            }
            top++;
            for(int i=top;i<=bottom;i++){
                temp.push_back(a[i][right]);
            }
            right--;
            
            for(int i=right;i>=left;i--){
                if(top<=bottom)
                temp.push_back(a[bottom][i]);
            }
            bottom--;
            
            for(int i=bottom ;i>=top;i--){
                if(left<=right)
                temp.push_back(a[i][left]);
            }
            left++;
        }
        for(int i=0;i<temp.size();i++){
            if(i==k-1){
            ans=temp[i];
            }
        }
        return ans;
    }
};