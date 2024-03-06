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

    node* findNode(node* head,int k)
    {
        int count = 1;
        node* temp = head;

        while(temp != nullptr && count < k)
        {
            temp = temp -> next;
            count++;
        }
        return temp;
    }

    void reverse(node* &head)
    {
        node* prev = nullptr;
        node* curr = head;
        node* next = nullptr;

        while(curr != nullptr)
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    node* merge(node* left,node* right)
    {
        node* head = nullptr;
        head = right;

        node* temp = left;
        while(temp -> next != nullptr)
            temp = temp -> next;
        
        temp -> next = head;
        head = left;
        
        return head;
    }

};

int main()
{
    Linked List;
    node* head = nullptr;
    node* tail = nullptr;
    List.insertAtEnding(head,1,tail);
    List.insertAtEnding(head,2,tail);
    List.insertAtEnding(head,4,tail);
    List.insertAtEnding(head,3,tail);
    // List.insertAtEnding(head,5,tail);
    
    // List.display(head);
    // List.findNode(head,2);
    node* Qnode = List.findNode(head,3);
    node* right = Qnode -> next;
    Qnode -> next = nullptr;

    List.reverse(head);
    List.reverse(right);
    head =  List.merge(head,right);
    List.display(head);
    return 0;
}