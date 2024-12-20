#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int size;
    int front;
    int rear;
    int *arr;

public:
    queue()
    {
        size = 10000;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void enqueue(int element)
    {
        if (rear == size )
        {
            cout << "Queue is full";
        }
        else
        {
            arr[rear] = element;
            rear++;
            cout<<element<<" is pushed into queuq"<<endl;
        }
    }
    void dqueue()
    {
        if (front == rear)
        {
            cout << "queue is empty";
        }
        else
        {
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }
};

int main()
{
    Queue q;

    q.enqueue(3);
}