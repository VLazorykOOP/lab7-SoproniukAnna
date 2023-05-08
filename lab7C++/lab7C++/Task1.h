#pragma once
#include <iostream>
using namespace std;

template <typename T>
T minElement(T* arr, int size)
{
    T minElem = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < minElem)
            minElem = arr[i];

    return minElem;
}


