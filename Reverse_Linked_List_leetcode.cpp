#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

class LinkedList{
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
        cout << "Head -> ";
        while(temp != nullptr)
        {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }

    void insertAtBeginning(node* &head,node* &tail,int data)
    {
        node* newnode = createNode(data);   
        if(head == nullptr)
        {
            tail = head  = newnode;
        }
        else{
            newnode -> next = head;
            head = newnode;
        }
    }

    void reverse(node* &head,node* &tail)
    {
        if(head == nullptr)
            return;
        
        node* prev = nullptr;
        node* current = head;
        node* next = nullptr;

        // tail = head;
        while(current != nullptr)
        {
            next = current -> next;
            current -> next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    node* problem_leetcode (node* &head,node* &tail)
    {
        reverse(head,tail);
        return head;
    }

};

int main()
{
    LinkedList List;
    node* head = nullptr;
    node* tail = nullptr;

    List.insertAtBeginning(head,tail,20);
    List.insertAtBeginning(head,tail,30);
    List.insertAtBeginning(head,tail,40);
    List.insertAtBeginning(head,tail,50);
    List.insertAtBeginning(head,tail,60);

    List.problem_leetcode(head,tail);
    List.display(head);

    return 0;
}