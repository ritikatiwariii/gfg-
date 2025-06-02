/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
  Node* reverse(Node* head){
      if(head==NULL){
          return head;
      }
      Node* pre=NULL;
      Node* curr=head;
      Node* next=NULL;
      while(curr!=NULL){
          next=curr->next;
          curr->next=pre;
          pre=curr;
          curr=next;
      }
      return pre;
  }
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        
        
        Node* curr1=reverse(num1);
        Node* curr2=reverse(num2);
        Node* newnode=new Node(-1);
        Node* curr=newnode;
        int sum;
        int digit;
        int carry=0;
        while(curr1!=NULL && curr2!=NULL){
            
            sum=curr1->data+curr2->data+carry;
            digit=sum%10;
            Node* k=new Node(digit);
            curr->next=k;
            curr=curr->next;
            carry=sum/10;
            curr1=curr1->next;
            curr2=curr2->next;
            
        }
        while(curr1!=NULL){
    
            sum=curr1->data+carry;
            digit=sum%10;
            Node* k=new Node(digit);
            curr->next=k;
            curr=curr->next;
            carry=sum/10;
            curr1=curr1->next;
            //curr2=curr2->next;
                    
        }
        while(curr2!=NULL){
            
            sum=curr2->data+carry;
            digit=sum%10;
            Node* k=new Node(digit);
            curr->next=k;
            curr=curr->next;
            carry=sum/10;
            //curr1=curr1->next;
            curr2=curr2->next;
            
        }
        while(carry!=0){
            sum=carry;
            digit=sum%10;
            Node* k=new Node(digit);
            curr->next=k;
            curr=curr->next;
            carry=sum/10;
            // curr1=curr1->next;
                        // curr2=curr2->next;

        }
       Node* ans= reverse(newnode->next);
       if(ans->data==0 && ans->next!=NULL){
           //it means it is a last node
           Node* temp=ans;
           ans=ans->next;
           delete temp;
       }
       return ans;
        
    }
};