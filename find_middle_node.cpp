#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

class LinkedList
{
    private:
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
            cout << temp -> data << " ";
            temp = temp -> next;
        }
    }

    void insertAtBeginning(node* &head,int data)
    {
        node* newnode = createNode(data);
        // newnode -> next = head;
        if(head == nullptr)
            head = newnode;
        else{
            newnode -> next = head;
            head = newnode;
        }
        display(head);        
    }
};

int main()
{
    LinkedList List;
    node* head = nullptr;
    List.insertAtBeginning(head,10);
    List.insertAtBeginning(head,20);
    List.insertAtBeginning(head,30);
    List.insertAtBeginning(head,40);
}