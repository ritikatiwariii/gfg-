class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
         sort(arr.begin(),arr.end());
      
        int n=arr.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(arr[i]+arr[j]==target){
                 return true;
                i++;
                j--;
           
                
            }
            else if(arr[i]+arr[j]>target ){
               j--;
            }
            else{
                i++;
            }
        }
     
    return false;
    }
};