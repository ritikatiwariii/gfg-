class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        //sort the array first 
        sort(arr.begin(),arr.end());
        //decalre a gllobal variables
        int largest=1;
        int count =0;
        int lastsmaller=INT_MIN; 
        //edge case if array is size is zero then return 
        if(arr.size()==0){
            return 0;
        }
        //iterate in the array
        for(int i=0;i<arr.size();i++){
            if(arr[i]-1==lastsmaller){
                //it means it is the part of sequesnce
                count=count+1;
                lastsmaller=arr[i];
            }
            else if(arr[i]!=lastsmaller){
                //not a part of sequience so creat e new sequence
                count=1;
                lastsmaller=arr[i];
            }
            //if it is equal no need to do something 
            //update the largest in every case
            largest=max(largest,count);
        }
        return largest;
        
        
    }
};