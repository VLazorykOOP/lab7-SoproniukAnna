#pragma once
#include <iostream>

template <typename T>
T minElement(T* arr, int size)
{
    T minElem = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < minElem)
            minElem = arr[i];

    return minElem;
}

template<>
char minElement(char* arr, int size)
{
    char minElem = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < minElem)
            minElem = arr[i];

    return minElem;
}

