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

    node* createNode(int data)
    {
        node* newnode = new node;
        newnode -> data = data;
        newnode -> next = nullptr;
        return newnode;
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "List is Empty" << endl;
            return;
        }
        else{
            node* temp = head;
            cout << "Head->";
            while(temp != nullptr)
            {
                cout << temp -> data << "->";
                temp = temp -> next;
            }
            cout << "NULL" << endl;
        }
    }

    int length()
    {
        int count = 0;
        if(head == nullptr)
            return 0;
        else{
            node* temp = head;
            while(temp != nullptr)
            {
                temp = temp -> next;
                count++;
            }
            return count;
        }
    }

    void insertAtBegin(int data)
    {
        node* newnode = createNode(data);

        if(head == nullptr)
            tail = head = newnode;
        else{
            newnode -> next = head;
            head = newnode;
        }
        display();
    }

    void insertAtEnd(int data)
    {
        node* newnode = createNode(data);
        if(head == nullptr)
            tail = head = newnode;
        else{
            tail -> next = newnode;
            tail = newnode;
        }
        display();
    }

    void deleteAtBegin()
    {
        if(head == nullptr)
        {
            cout << "List is Empty";
            return;
        }
        else{
            node* temp = head;
            head = head -> next;
            delete temp;

            display();
        }
    }

    void deleteAtEnd()
    {
        if(head == nullptr)
        {
            cout << "List is Empty" << endl;
            return;
        }
        else{
            node* temp = head;
            node* prev = nullptr;

            while(temp -> next != nullptr)
            {
                prev = temp;
                temp = temp -> next;
            }

            if(prev == nullptr)
                tail = head = nullptr;
            else{
                prev -> next = nullptr;
                tail = prev;
                delete temp;
            }
            display();
        }
    }

    void deleteAtPosition(int position)
    {
        if(position < 0)
        {
            cout << "List is Empty" <<  endl;
            return;
        }
        
        if(position == 0)
        {
            deleteAtBegin();
            return;
        }

        else if(position == length())
        {
            deleteAtEnd();
            return;
        }

        else{
            node* temp = head;
            node* prev = nullptr;
            int count = 0;
            while(temp != nullptr && count < position - 1)
            {
                prev = temp;
                temp = temp -> next;
                count++;
            }

            if(temp == nullptr)
            {
                cout << "Position is out of Bound";
                return;
            }
            else{
                prev -> next = temp -> next;
                delete temp;
            }
            display();
        }

    }

    void remove_Nth_node(int x)
    {
        int pos = length() - x;
        deleteAtPosition(pos);
    }
};

int
main()
{
    LinkedList List;
    List.insertAtEnd(1);
    List.insertAtEnd(2);
    List.remove_Nth_node(1);
    // cout << List.length();

    return 0;
}