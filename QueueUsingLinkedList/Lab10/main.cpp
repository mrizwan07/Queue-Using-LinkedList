#include <iostream>
using namespace std;

template <class T>
class LinkedList; // Forward declaration

template <class T>
class Element
{
    friend class LinkedList<T>;
    T info;
    Element<T>* next;

public:
    Element()
    {
        next = nullptr;
    }
    Element(T val)
    {
        info = val;
        next = nullptr;
    }
    T getInfo()
    {
        return info;
    }
};

template <class T>
class LinkedList
{
    Element<T>* head;
    int size;

public:
    LinkedList()
    {
        head = nullptr;
    }
    void insertAtTail(T val)
    {
        Element<T>* temp = new Element<T>(val);
        if (head == nullptr)
        {
            head = temp;
            return;
        }
        Element<T>* nodeptr = head;
        while (nodeptr->next != nullptr)
        {
            nodeptr = nodeptr->next;
        }
        nodeptr->next = temp;
    }
    bool deleteAtHead()
    {
        if (head == nullptr)
        {
            return false;
        }
        Element<T>* nodeptr = head->next;
        delete head;
        head = nodeptr;
        return true; // Added return statement
    }

    void enqueue(T val)
    {
        if (val >= 0 && val <= 999999)
        {
            insertAtTail(val);
        }
    }
    void dequeue()
    {
        if (head == nullptr)
        {
            return;
        }
        else
        {
            deleteAtHead();
        }
    }
};

int main()
{
    LinkedList<int> team;
    int choice = 0;
    cout << "Choose 1 to ENQUEUE and 2 for DEQUEUE and 3 for STOP ";
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
        cout << "Choose 1 to ENQUEUE and 2 for DEQUEUE and 3 for STOP ";
        cin >> choice;
    }
    return 0;
}
