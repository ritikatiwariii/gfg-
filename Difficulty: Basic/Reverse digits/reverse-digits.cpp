//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int reverse=0;
        while(n>0){
            int digit=n%10;
            //digit mil gyi hai
            //put it into the reverse
            reverse=(reverse*10)+digit;
            n=n/10;
        }
        return reverse;
        
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
        int ans = ob.reverseDigits(n);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends