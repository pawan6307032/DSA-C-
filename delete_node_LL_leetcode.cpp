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

public:
    node *createNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->next = nullptr;

        return newnode;
    }

    int length(node *head)
    {
        int count = 0;
        node *temp = head;

        if (head == nullptr)
            return 0;
        else
        {
            while (temp != nullptr)
            {
                temp = temp->next;
                count++;
            }
            return count++;
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

    void deleteFromBeginning(node *&head)
    {
        if (head == nullptr)
            return;

        node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromEnding(node *&head)
    {
        if (head == nullptr)
            return;
        else
        {
            node *temp = head;
            node *prev = nullptr;

            while (temp->next != nullptr)
            {
                prev = temp;
                temp = temp->next;
            }

            if (prev == nullptr)
                return;
            else
            {
                prev->next = nullptr;
                delete temp;
            }
        }
    }

    void deleteFromPosition(node *&head, int pos)
    {
        if (pos == 0)
        {
            deleteFromBeginning(head);
            return;
        }

        if (pos == length(head))
        {
            deleteFromEnding(head);
        }

        node *temp = head;
        node *prev = nullptr;
        int count = 0;
        while (temp != nullptr && count < pos)
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

    void display(node *head)
    {
        if (head == nullptr)
            return;
        else
        {
            node *temp = head;
            cout << "Head -> ";
            while (temp != nullptr)
            {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    }

    void delete_mid(node *&head)
    {
        int mid = length(head) / 2;

        deleteFromPosition(head, mid);
    }

    void delete_node(node *head, int key)
    {
        node *prev = head;
        node *curr = head->next;

        while (curr != nullptr)
        {
            if (curr->data == key)
            {
                node *temp = curr;
                curr = curr->next;
                prev->next = curr;
                delete temp;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
    }
};

int main()
{
    LinkedList List;
    node *head = nullptr;

    // List.insertAtBeginning(head, 1);
    // List.insertAtBeginning(head, 5);
    // List.insertAtBeginning(head, 7);
    // List.insertAtBeginning(head, 6);
    // List.insertAtBeginning(head, 4);
    // List.insertAtBeginning(head, 2);

    // List.insertAtBeginning(head,5);
    List.insertAtBeginning(head, 9);
    List.insertAtBeginning(head, 1);
    List.insertAtBeginning(head, 5);
    List.insertAtBeginning(head, 4);
    List.display(head);

    // List.delete_mid(head);
    List.delete_node(head, 1);
    List.display(head);

    return 0;
}
