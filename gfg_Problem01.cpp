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

    void insertAtBegin(int data)
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

    int length()
    {
        if (head == nullptr)
            return 0;
        else
        {
            int count = 0;
            node *temp = head;
            while (temp != nullptr)
            {
                temp = temp->next;
                count++;
            }
            return count;
        }
    }

    int find_Nth_node(int x)
    {
        int pos = length() - x;

        if (pos < 0)
        {
            cout << "Invalid Position" << endl;
            return -1;
        }
        else{
            node* temp = head;
            int count = 0;
            while(temp != nullptr)
            {
                if(count == pos)
                    return temp -> data;
                temp = temp -> next;
                count++;
            }
            return -1;
        }
    }
};

int main()
{
    LinkedList List;
    List.insertAtBegin(1);
    List.insertAtBegin(2);
    List.insertAtBegin(3);
    List.insertAtBegin(4);
    List.insertAtBegin(5);
    List.insertAtBegin(6);
    List.insertAtBegin(7);
    List.insertAtBegin(8);
    List.insertAtBegin(9);
    cout << "Output :- " << List.find_Nth_node(2);
    return 0;
}