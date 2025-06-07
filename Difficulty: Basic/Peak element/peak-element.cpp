
class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
         int s = 0;
    int e = arr.size() - 1;
    int m ;
    while (s < e){
            m = s + (e-s)/2;
        int element = arr[m];
        if (element<arr[m+1]){
            s=m+1;
        }
        else{
            e=m;
        }
    }
  return s;
    }
};