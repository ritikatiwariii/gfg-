class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        sort(a.begin(), a.end());
      sort(b.begin(), b.end());

        int i=0;
        int j=0;
        vector<int>ans;
        while(i<a.size()&& j<b.size()){
            if(a[i]==b[j]){
                //so push in ans fiesst check is this already exist or not
                if(ans.empty()|| ans.back()!=a[i]){
                    ans.push_back(a[i]);
                }
                    i++;
                    j++;
                
            }
                else if(a[i]<b[j]){
                    if(ans.empty()|| ans.back()!=a[i]){
                     ans.push_back(a[i]);
                    }
                     i++;
                
            }
            else{
                if(ans.empty()|| ans.back()!=b[j]){ 
                    ans.push_back(b[j]);
                }
                    j++;
                
            }
        }
        while(i<a.size()){
            if(ans.empty()|| ans.back()!=a[i]){
                     ans.push_back(a[i]);
            }
                     i++;
                
        }
        while(j<b.size()){
                    if(ans.empty()|| ans.back()!=b[j]){
                         ans.push_back(b[j]);
                    }
                    j++;
                
        }
        return ans;
        // return vector with correct order of elements
    }
};