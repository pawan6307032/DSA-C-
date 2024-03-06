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

    node *merge(node *left, node *right)
    {
        if(left == nullptr ) return right;
        if(right == nullptr) return left;
        
        node *mergehead = nullptr;
        node *mergetail = nullptr;

        while (left != nullptr && right != nullptr)
        {
            if (left->data <= right->data)
            {
                if (mergehead == nullptr)
                    mergehead = mergetail = left;
                else
                {
                    mergetail->next = left;
                    mergetail = mergetail->next;
                }
                left = left->next;
            }
            else
            {
                if (mergehead == nullptr)
                    mergehead = mergetail = right;
                else
                {
                    mergetail->next = right;
                    mergetail = mergetail->next;
                }
                right = right->next;
            }
        }

        while (left != nullptr)
        {
            if (mergehead == nullptr)
                mergetail = mergetail = left;
            else
            {
                mergetail->next = left;
                mergetail = mergetail->next;
            }
            left = left->next;
        }

        while (right != nullptr)
        {
            if (mergehead == nullptr)
                mergetail = mergetail = right;
            else
            {
                mergetail->next = right;
                mergetail = mergetail->next;
            }
            right = right->next;
        }

        return mergehead;
    }

    node *findMiddle(node *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;

        node *slow = head;
        node *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    node *merge_sort(node *head)
    {
        if (head == nullptr)
            return head;

        else if (head->next == nullptr)
            return head;

        else
        {
            node *middle = findMiddle(head);
            node *right_half = middle->next;
            middle->next = nullptr;

            node *left_half = merge_sort(head);
            right_half = merge_sort(right_half);

            return merge(left_half, right_half);
        }
    }
};

int main()
{
    LinkedList List;
    List.insertAtEnding(List.head, List.tail, 4);
    List.insertAtEnding(List.head, List.tail, 2);
    List.insertAtEnding(List.head, List.tail, 1);
    List.insertAtEnding(List.head, List.tail, 3);

    cout << "Original : ";
    List.display(List.head);

    cout << "Sorting : ";
    node *newhead = List.merge_sort(List.head);
    List.display(newhead);

    return 0;
}