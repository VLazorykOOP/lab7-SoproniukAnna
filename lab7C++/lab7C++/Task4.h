#pragma once
#include <iostream>

using namespace std;

template <typename T>
class ListNode 
{
public:
    T data;
    ListNode* next;

    ListNode(T val) : data(val), next(nullptr) {}
};

template <typename T>
class List 
{
private:
    ListNode<T>* head;
    ListNode<T>* tail;
    int size;

public:
    List() : head(nullptr), tail(nullptr), size(0) {}

    void add(T val) 
    {
        ListNode<T>* node = new ListNode<T>(val);

        if (head == nullptr) {
            head = node;
            tail = node;
        }
        else {
            tail->next = node;
            tail = node;
        }

        size++;
    }

    T get(int index) 
    {
        if (index < 0 || index >= size)
            return 0;

        ListNode<T>* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->data;
    }

    int getSize() 
    {
        return size;
    }

    class Iterator 
    {
    private:
        ListNode<T>* current; //поточний вказівник на вузол

    public:
        Iterator(ListNode<T>* node) : current(node) {}

        Iterator& operator++() 
        {
            current = current->next;
            return *this;
        }

        bool operator!=(const Iterator& other) const 
        {
            return current != other.current;
        }

        T& operator*() 
        {
            return current->data;
        }
    };

    Iterator begin() 
    {
        return Iterator(head);
    }

    Iterator end() 
    {
        return Iterator(nullptr);
    }
};
