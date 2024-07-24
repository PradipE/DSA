#include<iostream>
#include<vector>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;
    //constructor
    node(int d,node*n,node* p)
    {
        data=d;
        next=n;
        prev=p;
    }
    node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
};
node* convertarrtoll(vector<int>arr)
{
  if(arr.empty())
  {
    return NULL;
  }
  node* head=new node (arr[0]);
  node* prev =head;
  for(int i=1;i<arr.size();i++)
  {
      node* temp =new node(arr[i],NULL,prev);
      prev->next=temp;
      prev=temp;
  }
  return head;

}
node*  deletefromhead(node*head)
{
    if(head == NULL || head->next == NULL)
    {
        return NULL;
    }
    node* deletenode = head;
    head=head->next;
    head->prev=NULL;
    deletenode->next=NULL;

    delete deletenode;
    return head;
}
node* deletefromtail(node* head)
{
    if(head == NULL || head->next == NULL)
    {
        return NULL;
    }
    node* tail=head;
    while (tail->next !=NULL)
    {
        tail=tail->next;
    }
    node* newtail =tail->prev;
    newtail->next=NULL;
    tail->prev=NULL;
    delete tail;
    return head;
    
}
node* deletefromkth(node* head,int  k)
{
    if(head== NULL)
    {
        return NULL;

    }
    int count =0;
    node* kth=head;
    while(kth != NULL)
    {
        count++;
        if(count==k)
        {
            break;
        }
        kth=kth->next;
    }
    node* back=kth->prev;
    node* front=kth->next;
    if(back==NULL||front==NULL)
    {
        return NULL;
    }
    else if(back==NULL)
    {
        return deletefromhead(head);
    }
    else if(front ==NULL)
    {
        return deletefromtail(head);
    }
   
    back->next=front;
    front->prev=back;
    kth->next=nullptr;
    kth->prev=nullptr;
    delete kth;
     return head;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    vector<int>arr={1,2,3,4,5,6,7};
    node* head=convertarrtoll(arr);
    print(head);
    // head=deletefromhead(head);
    // print(head);
    // head=deletefromtail(head);
    // print(head);
    head=deletefromkth(head,4);
    print(head);
    return 0;

}