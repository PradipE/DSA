#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    //object members
    int data;
    Node* next;
    //constructor
    Node(int data1, Node* nextNode = nullptr) 
    {
        data=data1;
        next=nextNode;
    }


};

Node* convartarrtoll(vector<int> &arr)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    
    for(int i=1;i<arr.size();i++)
    {
       Node* temp=new Node(arr[i]);
       mover->next=temp;
       mover=mover->next;
    }
    return head;
}


Node* print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data <<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* insertathead(Node* head,int val)
{
    Node* temp =new Node(val,head); 
    return temp;
}
Node* insertattail(Node* head,int value)
{
    //if ll have not any element 
    if(head==NULL)
    {
        return new Node(value);
    }
    Node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node* newnode =new Node(value);
    temp->next=newnode;
    return head;
}
 Node* insertatkth(Node* head,int value,int k)
 {
    //if ll have not any element 
    if(head==NULL)
    {
        if(k==1)
       {
        return new Node(value);
       }
        else 
        {
            return head;
        }
    }
    if(k==1)
    {
        return new Node(value,head);
    }
    int count =0;
    Node* temp=head;
    while(temp!=NULL)
    {
        count++;
        if(count==(k-1))
        {
           Node* newnode=new Node(value,newnode->next=temp->next);
           temp->next=newnode;
           break;
        }
        temp=temp->next;
    }
    return head;
 }
int main()
{
  vector<int> arr={2,4,5,6,7};
  Node*head=convartarrtoll(arr);
  Node* show=print(head);
  //head=insertathead(head,20);
  //head=insertattail(head,100);
  head= insertatkth(head,20,2);
  show=print(head);
}