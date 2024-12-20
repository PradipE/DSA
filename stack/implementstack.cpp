#include<iostream>
using namespace std;

 class stack{

   public:
    int* arr;
    int top;
    int size;

    stack(int size)
    {
        this->size = size;
        arr= new int[size];
        top=-1;
    }

    void push(int element)
    {
        if(size-top > 1)
        {
            top++;
            arr[top]=element;
        }else{
            cout<<"stack is full";
        }
    }
    void pop()
    {
        if(top > 0)
        {
            top--;
        }
        else{
            cout<<"Stack is empty";
        }
    }
    int topp()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
    }
    
    ~stack()
    {
        delete[] arr;
    }
};
int main()
{
    stack st(3);

    st.top;
    st.push(3);
    
}
