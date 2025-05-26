// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int temp=n;
        int digit=0;
        int ans=0;
        while(n>0){
            digit=n%10;
            n=n/10;
            ans=ans+digit*digit*digit;
        }
        if(ans==temp){
            return true;
        }
        return false;
    }
};