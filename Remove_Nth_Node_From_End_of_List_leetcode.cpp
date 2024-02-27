#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class LinkedList
{
private:
    node *head;
    node *tail;

public:
    node *createNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->next = nullptr;

        return newnode;
    }

    void display(node *head)
    {
        if (head == nullptr)
            return;

        node *temp = head;
        cout << "Head -> ";
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    int length(node *head)
    {
        if (head == nullptr)
            return 0;

        int count = 0;
        node *temp = head;
        while (temp != nullptr)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }

    void insertAtBeginning(node *&head, node *&tail, int data)
    {
        node *newnode = createNode(data);

        if (head == nullptr)
            tail = head = newnode;
        else
        {
            newnode->next = head;
            head = newnode;
        }
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

    void deleteFromBeginning(node *&head, node *&tail)
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }

        node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromEnding(node *&head, node *&tail)
    {
        if (head == nullptr)
        {
            cout << "List is empty" << endl;
            return;
        }

        node *temp = head;
        node *prev = nullptr;

        while (temp->next != nullptr)
        {
            prev = temp;
            temp = temp->next;
        }

        if (prev == nullptr)
            tail = head = nullptr;
        else
        {
            prev->next = nullptr;
            tail = prev;
            delete temp;
        }
    }

    void deleteFromPosition(node *&head, node *&tail, int position)
    {
        if (position == 0)
        {
            deleteFromBeginning(head, tail);
            return;
        }

        if (position == length(head))
        {
            deleteFromEnding(head, tail);
            return;
        }

        node *prev = nullptr;
        node *temp = head;
        int count = 0;

        while (temp != nullptr && count < position - 1)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }

        if (temp == nullptr)
            return;

        else
        {
            prev->next = temp->next;
            delete temp;
        }
    }

    void remove_Nth_node(node* &head,node* &tail,int pos)
    {
        deleteFromPosition(head,tail,pos);
    }
};

int main()
{
    LinkedList List;
    node *head = nullptr;
    node *tail = nullptr;

    List.insertAtEnding(head, tail, 7);
    List.insertAtEnding(head, tail, 9);
    // List.insertAtEnding(head, tail, 2);
    // List.insertAtEnding(head, tail, 9);
    // List.insertAtEnding(head, tail, 5);
    List.remove_Nth_node(head,tail,1);
    List.display(head);


    return 0;
}