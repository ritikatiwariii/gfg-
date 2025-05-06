//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    bool isPalindrome(int n) {
        // Code here.
        //some how i have to compare original number to the revsr number
        //firstly store the original number
        int temp=n;
       int reverse=0;
        while(n>0){
            int digit=n%10;
            reverse=(reverse*10)+digit;
            n=n/10;
        }
       // cout<<reverse;
    
        if(temp==reverse){
            return true;
        }
        else{
        return false;
        }
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        bool ans = ob.isPalindrome(n);
        cout << (ans ? "true" : "false") << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends