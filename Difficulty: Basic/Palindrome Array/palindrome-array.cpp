
class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        // code here
        int i=0;
        int j=arr.size()-1;
        while(i<=j){
            if(arr[i]!=arr[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};
