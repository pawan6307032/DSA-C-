#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class LinkedList
{
public:
    node *head;
    node *tail;
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    node *createNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->next = nullptr;
        return newnode;
    }

    void insertAtEnding(node *&head, node *&tail, int data)
    {
        node *newnode = createNode(data);
        if (head == nullptr)
            head = tail = newnode;
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void insertAtBeginning(node *&head, int data)
    {
        node *newnode = createNode(data);

        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->next = head;
            head = newnode;
        }
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

    void display(node *head)
    {
        if (head == nullptr)
            return;

        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void merge(node* &head1,node* head2)
    {
        // node* head = nullptr;
        node* temp = head1;
        while(temp -> next != nullptr)
            temp = temp -> next;
        
        temp -> next  = head2;
    } 

    int length(node* head)
    {
        int count = 1;
        node* temp = head;

        while(temp!= nullptr)
        {
            temp = temp -> next;
            count++;
        }
        return count;
    }

    node *oddEvenList(node *head)
    {
        node *even = nullptr;
        node *odd = nullptr;

        // node *temp = head;

        while (head != nullptr)
        {
            node* curr = head;
            if (head->data % 2 == 0)
            {
                insertAtBeginning(even, head->data);
            }
            else
            {
                insertAtBeginning(odd, head->data);
            }
            head = head->next;
            delete curr;
        }

        reverse(even);
        reverse(odd);
        
        node* ahead = nullptr;
        if(length(odd) > length(even))
            merge(odd,even);
        else
            merge(even,odd);
        
        return odd;
    }
};

int main()
{
    LinkedList List;
    List.insertAtEnding(List.head, List.tail, 2);
    List.insertAtEnding(List.head, List.tail, 1);
    List.insertAtEnding(List.head, List.tail, 3);
    List.insertAtEnding(List.head, List.tail, 5);
    List.insertAtEnding(List.head, List.tail, 6);
    List.insertAtEnding(List.head, List.tail, 4);
    List.insertAtEnding(List.head, List.tail, 7);

    // cout << "Original : ";
    // List.display(List.head);

    node* head1 = List.oddEvenList(List.head);
    List.display(head1);

    return 0;
}