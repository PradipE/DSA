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
int print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
   cout<<endl;
}
int checkvalpresent(Node* head,int val)
{
    
    Node*temp=head;
    
    while(temp!=NULL)
    {
        if(temp->data == val)
        {
            return 1;
        }
        temp=temp->next;
       
    }
    return 0;
}

int main()
{
  vector<int> arr={3,4,5,6};
  Node *head=convartarrtoll(arr);
  print(head);
  cout<<checkvalpresent(head,5);
  
}