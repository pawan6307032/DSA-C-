#include <iostream>
using namespace std;

class Stack
{
    int *a;
    int size;
    int top;

public:
    Stack(int size)
    {
        a = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            a[top] = data;
        }
        else
            cout << "Overflow" << endl;
    }

    void pop()
    {
        if (top == -1)
            cout << "underflow" << endl;
        else
            top--;
    }

    int getTop()
    {
        if (top == -1)
            cout << "Stack is Empty" << endl;
        else
            return a[top];
    }

    int getSize()
    {
        return (top == -1) ? 0 : top + 1;
    }

    bool isEmpty()
    {
        return (top == -1) ? true : false;
    }
};

int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout << endl;
    cout << "Size : " << s.getSize() << endl;
    cout << "Top : " << s.getTop() << endl;
    cout << "isEmpty : " << s.isEmpty() << endl;

    cout << "Display : " << endl;
    while (!s.isEmpty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << endl;
    s.pop();
    return 0;
}