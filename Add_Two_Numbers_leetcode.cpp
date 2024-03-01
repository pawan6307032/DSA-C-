#include <iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
};

class LinkedList
{
    ListNode *head;
    ListNode *tail;

public:
    ListNode *createNode(int data)
    {
        ListNode *newnode = new ListNode;
        newnode->data = data;
        newnode->next = nullptr;
        return newnode;
    }

    void insertAtBeginning(ListNode *&head, int data)
    {
        ListNode *newnode = createNode(data);

        if (head == nullptr)
            head = newnode;
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }

    void insertAtEnding(ListNode* &head,int data,ListNode* &tail)
    {
        ListNode* newnode = createNode(data);
        if(head == nullptr)
            tail = head = newnode;
        else{
            tail -> next = newnode;
            tail = newnode;
        }
    }

    void add(ListNode *head1, ListNode *head2, ListNode *&head3)
    {
        int carry = 0;
        ListNode *temp1 = head1;
        ListNode *temp2 = head2;
        ListNode *tail3 = nullptr;

        int ans = 0;
        while (temp1 != nullptr && temp2 != nullptr)
        {
            int x = temp1->data + temp2->data + carry;
            int n = x % 10;
            carry = x / 10;
            insertAtEnding(head3, n,tail3);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        while (temp1 != nullptr)
        {
            int x = temp1->data + carry;
            int n = x % 10;
            carry = x / 10;
            insertAtEnding(head3, n,tail3);
            temp1 = temp1->next;
        }

        while (temp2 != nullptr)
        {
            int x = temp2->data + carry;
            int n = x % 10;
            carry = x / 10;
            insertAtEnding(head3, n,tail3);
            temp2 = temp2->next;
        }

        while (carry != 0)
        {
            int x = carry;
            int n = x % 10;
            carry = x / 10;
            insertAtEnding(head3, n,tail3);
        }
    }
    
    void reverse(ListNode *&head)
    {
        if (head == nullptr)
            return;

        ListNode *prev = nullptr;
        ListNode *current = head;
        ListNode *next = nullptr;
        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    ListNode *problem(ListNode *head1, ListNode *head2)
    {
        ListNode *head = nullptr;
        add(head1, head2, head);
        reverse(head);
        return head;
    }

    void display(ListNode *head)
    {
        cout << endl;
        if (head == nullptr)
            return;

        ListNode *temp = head;
        cout << "Head -> ";
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList List;
    ListNode* head = nullptr;
    ListNode* head2 = nullptr;

    List.insertAtBeginning(head,3);
    List.insertAtBeginning(head,4);
    List.insertAtBeginning(head,5);
    List.display(head);

    List.insertAtBeginning(head2,4);
    List.insertAtBeginning(head2,5);
    List.display(head2);
    
    ListNode* head3 = List.problem(head,head2);

    List.display(head3);
    return 0;
}