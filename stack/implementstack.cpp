#include<iostream>
using namespace std;
class stack{

    public:
    int *arr;
    int top;
    int size;
    //some behaviour or a constructor
    stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element)
    {
         if (size-top > 1)
         {
            top++;
            arr[top]=element;
         }
         else
         {
            cout<<"Stack is full you can't insert element"<<endl;
         }
         
    }
    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
             cout<<"Stack is empty you can't remove element"<<endl;
        }
    }
    int topp()
    {
        if(top >=0)
        {
           return arr[top];  
        }
        else
        {
             return -1;
        }    
    }
    bool isempty()
    {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    std::cout << st << std::endl;
}
