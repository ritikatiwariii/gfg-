/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        //base case
        if(head==NULL){
            return head;
        }
        Node *pre=NULL;
        Node* curr=head;
        Node* next=NULL;
        int cnt=0;
        while(curr!=NULL && cnt<k){
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
            cnt++;
        }
        //recursion dedega
        if(curr!=NULL){
           head->next= reverseKGroup(curr,k);
        }
        return pre;
    }
};