class Solution {
  public:
    bool arraySortedOrNot(vector<int>& arr) {
        // code here
        for(int i=1;i<arr.size();i++){
            if(arr[i]>=arr[i-1]){
                
            }
            else{
                return false;
            }
        }
        return true;
    }
};