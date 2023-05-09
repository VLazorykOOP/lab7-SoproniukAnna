#pragma once
using namespace std;
template <class T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode* next; //вказівник на наступний елемент

    LinkedListNode() {}
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = nullptr;
    }
    ~LinkedListNode() {}
};

template <class T>
class LinkedList 
{
private:
    LinkedListNode<T>* head; //вказівник на початок
    LinkedListNode<T>* tail; //вказівник на кінець
    int size;

public:
    LinkedList()
    {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    ~LinkedList() {}

    void add(T elem)
    {
        LinkedListNode<T>* node = new LinkedListNode<T>(elem);
        if (head == nullptr)
        {
            head = node;
            tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }
        size++;
    }

    T getIndex(int index)
    {
        if (index < 0 || index >= size)
            return 0;

        LinkedListNode<T>* node = head;
        for (int i = 0; i < index; i++)
            node = node->next;
        return node->data;
    }

    int getSize()
    {
        return this->size;
    }

};