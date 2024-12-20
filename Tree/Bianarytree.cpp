#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this-> data= d;
        this-> left = NULL;
        this-> right = NULL;
    }
};
node* treeCreation(node* root){
     cout<<"Enter the node :";
     int data;
     cin>>data;
     root=new node(data);
     if(data == -1)
     {
        return NULL;
     }
     cout<<"Enter the data for inserting in Left"<<endl;
     root->left=treeCreation(root->left);
     cout<<"Enter the data for inserting in Right"<<endl;
     root->right=treeCreation(root->right);
     return root;


}

int main()
{
    node* root = NULL;
    
    //treee
    root= treeCreation(root);
     
     return 0;
}
