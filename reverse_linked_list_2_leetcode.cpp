#include <iostream>
using namespace std;

struct ListNode
{
    int val;
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
        newnode-> val = data;
        newnode-> next = nullptr;
        return newnode;
    }

    void display(ListNode *head)
    {
        if (head == nullptr)
            return;

        ListNode *temp = head;
        cout << "Head -> ";
        while (temp != nullptr)
        {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void insertAtBegin(ListNode *&head, int data, ListNode *&tail)
    {
        ListNode *newnode = createNode(data);
        newnode->next = head;

        if (head == nullptr)
        {
            tail = head = newnode;
            return;
        }
        head = newnode;
    }

    ListNode *find_node(ListNode *head, int pos)
    {
        int count = 0;
        ListNode *temp = head;

        while (temp != nullptr && count < pos - 1)
        {
            if (count == pos)
                return temp;
            temp = temp->next;
            count++;
        }
        return temp;
    }

    ListNode* find_prev(ListNode* head,ListNode* temp1)
    {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != temp1)
        {
            prev = curr;
            curr = curr -> next;
        }
        return prev;
    }

    void reverse(ListNode* &left_node,ListNode* &right_node)
    {
        ListNode* prev = nullptr;
        ListNode* temp = left_node;
        ListNode* next = nullptr;
        right_node = left_node;

        while(temp != nullptr)
        {
            next = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = next;
        }
        left_node = prev;
    }

    void problem(ListNode* &head,int left,int right)
    {
        if(left == right)
            return;

        ListNode* left_node = find_node(head,left);
        ListNode* right_node = find_node(head,right);
        ListNode* prev_node = find_prev(head,left_node);
        ListNode* temp_node = right_node -> next;

        prev_node -> next = nullptr;
        right_node -> next = nullptr;
        reverse(left_node,right_node);
        prev_node -> next = left_node;
        right_node -> next =  temp_node;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* ans_node = head;
        problem(ans_node,left,right);
        return ans_node;
    }

};

int main()
{
    LinkedList List;
    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    // List.insertAtBegin(head,6,tail);
    List.insertAtBegin(head,5,tail);
    List.insertAtBegin(head,4,tail);
    List.insertAtBegin(head,3,tail);
    List.insertAtBegin(head,2,tail);
    List.insertAtBegin(head,1,tail);
    List.display(head);


    // List.insertAtBegin(head,5,tail);
    // List.display(head);
    ListNode*ans = List.reverseBetween(head,2,4);
    List.display(ans);
    
    return 0;
}