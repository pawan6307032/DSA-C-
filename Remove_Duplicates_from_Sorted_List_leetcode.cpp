#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

class Linked{
    node* head;
    node* tail;

    public:
    node* createNode(int data)
    {
        node* newnode = new node;
        newnode -> data = data;
        newnode -> next = nullptr;
        return newnode;
    }

    void display(node* head)
    {
        if(head == nullptr)
            return;
        
        node* temp = head;
        while(temp != nullptr)
        {
            cout << temp -> data << " " ;
            temp = temp -> next;
        }
    }

    void insertAtEnding(node* &head,int data,node* &tail)
    {
        node* newnode = createNode(data);

        if(head == nullptr)
        {
            newnode -> next = newnode;
            tail = head = newnode;
            return;
        }

        tail -> next =newnode;
        tail = newnode;
    }

    void removeDuplicate(node* &head)
    {
        if(head == nullptr)
            return;
        
        node* temp = head;
        while(temp != nullptr && temp -> next != nullptr)
        {
            if(temp -> data == temp -> next -> data)
            {
                node* curr = temp -> next;
                temp -> next = temp -> next -> next;
                delete curr;
            }
            else
            temp = temp -> next;
        }
    }
};

int main()
{
    Linked List;
    node* head = nullptr;
    node* tail = nullptr;
    List.insertAtEnding(head,10,tail);
    List.insertAtEnding(head,10,tail);
    List.insertAtEnding(head,20,tail);
    List.insertAtEnding(head,30,tail);
    List.insertAtEnding(head,30,tail);
    List.removeDuplicate(head);
    List.display(head);

    return 0;
}