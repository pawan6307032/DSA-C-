#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
};

class LinkedList{
    ListNode* head;
    ListNode* tail;

    public:
    ListNode* createNode(int data)
    {
        ListNode* newnode = new ListNode;
        newnode -> val = data;
        newnode -> next = nullptr;
        return newnode;
    }

    void display(ListNode* head)
    {
        cout << endl;
        if(head == nullptr)
            return ;
        
        ListNode* temp = head;
        cout << "HEAD -> ";
        while(temp != nullptr)
        {
            cout << temp -> val << " -> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }

    int length(ListNode* head)
    {
        if(head == nullptr)
            return 0;
        
        int count = 1;
        ListNode* temp = head;
        while(temp != nullptr)
        {
            temp = temp -> next;
            count++;
        }
        return count;
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

    ListNode* merge_sort(ListNode* head1,ListNode* head2)
    {
        ListNode* temp1 = head1;
        ListNode* temp2 = head2;
        ListNode* new_head = nullptr;
        ListNode* new_tail = nullptr;

        while(temp1 != nullptr && temp2 != nullptr)
        {
            if(temp1 -> val <= temp2 -> val)
            {
                insertAtEnding(new_head,temp1->val,new_tail);
                temp1 = temp1 -> next;
            }
            else
            {
                insertAtEnding(new_head,temp2 -> val,new_tail);
                temp2 = temp2 -> next;
            }
        }

        while(temp1 != nullptr)
        {
            insertAtEnding(new_head,temp1 -> val,new_tail);
            temp1 = temp1 -> next;
        }

        while(temp2 != nullptr)
        {
            insertAtEnding(new_head,temp2 -> val,new_tail);
            temp2 = temp2 -> next;
        }

        return new_head;
    }
};

int main()
{
    LinkedList List;
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    ListNode* head2 = nullptr;
    ListNode* tail2 = nullptr;

    // List.insertAtEnding(head,1,tail);
    // List.insertAtEnding(head,2,tail);
    // List.insertAtEnding(head,4,tail);
    List.display(head);

    // List.insertAtEnding(head2,1,tail2);
    // List.insertAtEnding(head2,3,tail2);
    List.insertAtEnding(head2,0,tail2);
    List.display(head2);
    ListNode* temp = List.merge_sort(head,head2);
    List.display(temp);
    return 0;
}