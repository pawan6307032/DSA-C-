# [Problem :](https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article)

Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the 
end of the linked list. 
 
**Example 1**: 
 
Input: 
N = 2 
LinkedList: 1->2->3->4->5->6->7->8->9 
Output: 8 

**Explanation**: In the first example, there 
are 9 nodes in linked list and we need 
to find 2nd node from end. 2nd node 
from end is 8. 

## Code Structure:

_The code defines a LinkedList class that represents a singly linked list. It includes the following functions:_ 

- **createNode(int data)**: Creates a new node with the given data and returns it.
insertAtBegin(int data): Inserts a new node at the beginning of the linked list.
length(): Returns the length of the linked list (number of nodes).
find_Nth_node(int x): Finds and returns the data of the node at the x-th position from the end of the linked list (where 1 is the last node, 2 is the second-last, and so on).
Time Complexity Analysis:


- **createNode(int data)**: O(1) - Constant time, as it only allocates memory and assigns values to the new node's fields.
insertAtBegin(int data): O(1) - Constant time, as it modifies the head and tail pointers to insert the new node at the beginning, regardless of the list's size.
- **length()**: O(n) - Linear time, as it iterates through the entire list to count the number of nodes.
- **find_Nth_node(int x)**: O(n) - Linear time in the worst case. Here's the breakdown:
- **length()**: O(n) to calculate the total number of nodes.
- **while loop**: O(n) in the worst case, as it might need to iterate through the entire list if x is the length of the list or larger.
# Explanation of find_Nth_node(int x):

### 1. Calculates the position from the beginning:
* The function first calls **length()** to determine the total number of* nodes in the list.
* It then subtracts x-1 from the length to get the position of the desired node from the beginning of the list (assuming 1-based indexing).
### 2. Handles invalid positions:
* If the calculated position is negative (meaning x is greater than the list's length), it prints an "Invalid Position" message and returns -1.
### 3. Iterates to the target node:
* If the position is valid, the function starts from the head and iterates through the list using a while loop.
* It keeps track of the current position using a counter (count).
* If the counter reaches the calculated position, it returns the data of the current node.
### 4. Returns -1 if not found:
* If the loop completes without finding the target node (e.g., x is 0), it returns -1 to indicate that the node wasn't found.


#  _Key Points:_
* _The **insertAtBegin** operation is efficient due to constant time insertion at the beginning._

* _The **length** and **find_Nth_node** operations have linear time complexity because they involve iterating through the list._

* _For frequent access to elements by index, consider using an array or a data structure with random access capabilities instead of a singly linked list._

