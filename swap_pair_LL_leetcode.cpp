#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class Linked
{

public:
    node *head;
    node *tail;
    Linked()
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

    void display(node *head)
    {
        node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtEnding(node *&head, node *&tail, int data)
    {
        node *newnode = createNode(data);

        if (head == nullptr)
            tail = head = newnode;
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void swapPair(node*& head) {
        if (head == nullptr || head->next == nullptr) {
            return;  // Base case: empty list or single-node list
        }

        // Swap the first pair
        node* temp = head;
        head = head->next;
        temp->next = head->next;
        head->next = temp;

        // Recursively swap pairs in the remaining list
        swapPair(head->next->next);
    }
};

int main()
{
    Linked List;

    List.insertAtEnding(List.head, List.tail, 1);
    List.insertAtEnding(List.head, List.tail, 2);
    List.insertAtEnding(List.head, List.tail, 3);
    List.insertAtEnding(List.head, List.tail, 4);
    List.insertAtEnding(List.head, List.tail, 5);
    node* temp = List.head;
    node* left = List.head;
    node* right = List.head -> next;
    List.swapPair(List.head);
    List.display(List.head);
    return 0;
}