#include<iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        data=d;
        next=NULL;
    }
    

};
Node* convertarrtoll(vector<int> &arr)
{
    Node* head=new Node(arr[0]);
    Node* mover=head;
    
    for(int i=0;i<arr.size();i++)
    {
       Node* temp=new Node(arr[i]);
       mover->next=temp;
       mover=mover->next;
    }
    return head;
}


int print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data <<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* deleteheadnode(Node* head)
{
    if(head==NULL)
    {
        return head;
    }
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;


}
int main()
{
    vector<int> arr={2,3};
    Node *head=convertarrtoll(arr);
   
    Node* temp=head;
    /*
    cout<<lengthll(head);
    cout<<endl;
    cout<<checkpresent(head,4);*/
    head = deleteheadnode(head);
    print(head);

    

    
   
}