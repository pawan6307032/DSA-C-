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

    void deleteFromBegin(ListNode* &head)
    {
        if(head == nullptr)
            return;
        
        ListNode* temp = head;
        head = head -> next;
        delete temp;
    }

    void deleteFromEnding(ListNode* &head,ListNode* &tail)
    {
        if(head == nullptr)
            return;
        
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(curr -> next != nullptr)
        {
            prev = curr;
            curr = curr -> next;
        }

        if(prev == nullptr)
            return;
        
        prev -> next = nullptr;
        tail = prev;
        delete curr;
    }

    void deleteFromPosition(ListNode* &head,ListNode* &tail,int position)
    {
        if(position <= 0)
            return;

        if(position == 1)
        {
            deleteFromBegin(head);
            return;
        }

        if(position == length(head))
        {
            deleteFromEnding(head,tail);
            return;
        }

        ListNode* prev = nullptr;
        ListNode* curr = head;
        int count = 1;
        while(curr != nullptr && count < position)
        {
            prev = curr;
            curr = curr -> next;
            count++;
        }

        if(curr == nullptr)
            return;
        
        prev -> next = curr -> next;
        delete curr;
    }

    void search(ListNode* &head,ListNode* &tail,int key)
    {
        if(head == nullptr)
            return;
        
        ListNode* curr = head;
        int count = 1;
        while(curr != nullptr)
        {
            if(curr -> val == key)
                {
                    deleteFromPosition(head,tail,count);
                    count--;
                }
            curr = curr -> next;
            count++;
        }
    }
};

int main()
{
    LinkedList List;
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    List.insertAtEnding(head,1,tail);
    List.insertAtEnding(head,2,tail);
    List.insertAtEnding(head,6,tail);
    List.insertAtEnding(head,3,tail);
    List.insertAtEnding(head,4,tail);
    List.insertAtEnding(head,5,tail);
    List.insertAtEnding(head,6,tail);
    List.search(head,tail,5);
    List.display(head);

    
    return 0;
}