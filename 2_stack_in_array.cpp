#include <iostream>
using namespace std;

class Stack
{
    int *a;
    int size;
    int top1;
    int top2;

public:
    Stack(int size)
    {
        a = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data)
    {
        if (top2 - top1 == 1)
            cout << "Stack 1 is full" << endl;
        else
            top1++;
            a[top1] = data;
    }

    void push2(int data)
    {
        if (top2 - top1 == 1)
            cout << "Stack 2 is full" << endl;
        else
            top2--;
            a[top2] = data;
    }

    void pop1()
    {
        if(top1 == -1)
            cout << "Stack 1 is empty" << endl;
        else
            top1--;
    }

    void pop2()
    {
        if(top2 == size)
            cout << "Stack 2 is empty" << endl;
        else
            top2++;
    }

    void display()
    {
        cout << endl;
        cout << "top1 : " << top1 << endl;
        cout << "top2 : " << top2 << endl;
        for(int i = 0; i < size;i++)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack s(10);

    s.push1(10);
    s.display();
    
    s.push1(20);
    s.display();
    
    s.push1(30);
    s.display();

    s.push1(40);
    s.display();

    s.push1(50);
    s.display();


    // s.push1(80);

    s.push2(110);
    s.display();
    
    s.push2(120);
    s.display();
    
    s.push2(130);
    s.display();
    
    s.push2(140);
    s.display();
    
    s.push2(150);
    s.display();
    s.push1(1000);

    return 0;
}