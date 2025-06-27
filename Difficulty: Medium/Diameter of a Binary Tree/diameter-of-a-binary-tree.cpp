/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/
#include<bits/stdc++.h>
class Solution {
  public:
 
  
  pair<int,int> diameterFast(Node* root){
      if(root==NULL){
          pair<int,int>p=make_pair(0,0);
          return p;
      }
      pair<int,int>left=diameterFast(root->left);
      pair<int,int>right=diameterFast(root->right);
      //diametre le aao left part se
      int op1=left.first;
      int op2=right.first;
      //height le aao dono se
      int op3=left.second+right.second;
      pair<int,int>ans;
      ans.first=max(op1,max(op2,op3));
      ans.second=max(left.second,right.second)+1;
      return ans;
  }
    int diameter(Node* root) {
        // Your code here
        return diameterFast(root).first;
    }
};