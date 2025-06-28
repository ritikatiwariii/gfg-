/* A binary tree node structure

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 */

class Solution {
  public:
    bool isBalanced(Node* root) {
        // Code here
        return check(root)!=-1;
        
    }
    int check(Node* root){
        if(root==NULL){
            return 0;
        }
        int left=check(root->left);
        if(left==-1){
            return -1;
        }
        int right=check(root->right);
        if(right==-1){
            return -1;
        }
        if(abs(left-right)>1){
            return -1;
        }
        return max(left,right)+1;
    }
};