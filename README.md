# Queue Behaviour Using Singly LinkedList

This repo has C++ implementation of queue implementation using a singly linked list. The queue supports enqueue and dequeue operations with a very consice menu.

## Overview

### `Element` Class

- Represents an element in the queue.
- Features:
  - Data of generic type `T`.
  - Pointer to the next element (`next`).

### `LinkedList` Class

- Represents the singly linked list used as the underlying data structure for the queue.
- Features:
  - Pointer to the head element (`head`).
  - Size of the queue (`size`).
- Methods:
  - `insertAtTail`: Insertion at the tail.
  - `deleteAtHead`: Deletion at the head.
  - `enqueue`: Enqueuing an element.
  - `dequeue`: Dequeuing an element.

## Example Usage

```cpp
int main()
{
    LinkedList<int> team;
    int choice = 0;
    cout << "Choose 1 to ENQUEUE, 2 for DEQUEUE, and 3 to STOP: ";
    cin >> choice;
    while (choice == 1 || choice == 2)
    {
        int element;
        if (choice == 1)
        {
            cout << "Enter an element: ";
            cin >> element;
            team.enqueue(element);
        }
        else if (choice == 2)
        {
            team.dequeue();
        }
        cout << "Choose 1 to ENQUEUE, 2 for DEQUEUE, and 3 to STOP: ";
        cin >> choice;
    }
    return 0;
}
