#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // constructor
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

void insertationNode(Node *&head, int value)
{

    // create the new node
    Node *newNode = new Node(value);
    // insert the data into the node if no data in ll first node = data
    if (head == nullptr)
    {
        head = newNode;
    }
    // second node
    else
    {
        Node *tail = head;
        while (tail->next != nullptr)
        {
            tail = tail->next;
        }
        tail->next = newNode;
    }
}

Node *deleteHead(Node *head)
{
    Node *temp = head;
    if (head == nullptr)
    {
        return nullptr;
    }

    head = head->next;

    delete temp;
    return head;
}
Node *deleteTail(Node *head)
{
    // temp pointing to the head
    Node *temp = head;
    // if the ll is no data or one data
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    // if two or more data in ll
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    // after this loop we are at last second index
    delete temp->next;

    temp->next = nullptr;

    return head;
}

Node *deleteKth(Node *head, int k)
{
    // if ll is empty
    if (head == nullptr)
    {
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node *prev = nullptr;

    while (temp != nullptr)
    {
        cnt++;

        if (cnt == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* deleteVal(Node* head,int val)
{
    if(head == nullptr)
    {
        return nullptr;
    }

    Node* temp = head;
    Node* prev = nullptr;

    while(temp != nullptr)
    {
        if(temp->data == val)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

void displayNode(Node *head)
{
    Node *tail = head;

    while (tail->next != NULL)
    {
        cout << tail->data << " -> ";
        tail = tail->next;
    }
    cout << "nullptr" << endl;
}

int main()
{

    Node *head = nullptr; // first head is initilize with nullptr

    insertationNode(head, 1);
    insertationNode(head, 2);
    insertationNode(head, 3);
    insertationNode(head, 5);
    insertationNode(head, 6);

    displayNode(head);
    // head = deleteHead(head);
    // displayNode(head);
    // head = deleteTail(head);
    // displayNode(head);
    //head = deleteKth(head, 3);
    head = deleteVal(head,5);
    displayNode(head);
}