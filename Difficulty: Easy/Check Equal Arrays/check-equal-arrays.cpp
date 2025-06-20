// User function template for C++

// User function template for C++


// User function template for C++

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        sort(a.begin(),a.end());
         sort(b.begin(),b.end());
        int i=0;
        int j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            else{
                return false;
                break;
            }
        }
        return true;
    }
};