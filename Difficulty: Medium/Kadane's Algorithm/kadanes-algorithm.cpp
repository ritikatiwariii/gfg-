class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                //sum is lesser than 0 dont need to include because it always reduce our sum
                sum=0;
            }
        
        }
        return maxi;
    }
};