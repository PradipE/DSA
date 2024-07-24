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