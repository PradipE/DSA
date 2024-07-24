#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    //object
    Node(int d)
    {
        data=d;
        next = NULL;
    }   
};
Node* convartarrtoll(vector<int> &arr)
{
   Node* head=new Node(arr[0]);
   Node* mover =head;
   for(int i=1;i<arr.size();i++)
   {
      Node* temp =new Node(arr[i]);
      mover->next=temp;
      mover=temp;
   }
    return head;
}
Node* print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
   cout<<endl;
}
Node* deletehead(Node* head)
{
    if(head == NULL)
    {
        return head;
    }
    Node* temp=head;
    head=head->next;
    delete(temp);
    return head;

}
Node* deletetail(Node* head)
{
    Node* temp=head;
    if(head==NULL || head->next==NULL)
    {
        return NULL;
    }
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    return head;
}

Node* deleteatkth(Node* head,int k)
{
    //if linked list is null
    if(head==NULL)
    {
        return head;
    }
    //if the linked list have a one element
    if(k==1)
    {
         Node* temp= head;
         head=head->next;
         free(temp);
         return head;
    }
    //if linkedlist have multiple element 
    int count =0;
    Node* temp =head;
    Node* previous =NULL;
    while (temp !=NULL)
    {
        count++;
        if(count == k)
        {
            previous->next=previous->next->next;
            free(temp);
            break;
            
        }
        previous=temp;
        temp=temp->next;

    }
    
   return head;
}

Node* deletetheelement(Node* head,int d)
{
    //if linked list is null
    if(head==NULL)
    {
        return head;
    }
    //if the linked list have a one element
    if(head->data==d)
    {
         Node* temp= head;
         head=head->next;
         free(temp);
         return head;
    }
    //if linkedlist have multiple element 
    
    Node* temp =head;
    Node* previous =NULL;
    while (temp !=NULL)
    {
        
        if(temp->data==d)
        {
            previous->next=previous->next->next;
            free(temp);
            break;
            
        }
        previous=temp;
        temp=temp->next;

    }
    
   return head;
}

int main()
{
  vector<int> arr={3,4,5,6};
  Node *head=convartarrtoll(arr);
  Node* show= print(head);
  //show=print(head);
deletetheelement(head,5);
print(head);

  return 0;
}