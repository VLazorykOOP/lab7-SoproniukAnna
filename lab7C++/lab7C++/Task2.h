#pragma once
#include <iostream>
template <class T>
void insertSort(T arr[], long size)
{
	T x;
	long i, j;

	for (i = 0; i < size; i++) {  // цикл проходов, i - номер прохода
		x = arr[i];

		// поиск места элемента в готовой последовательности 
		for (j = i - 1; j >= 0 && arr[j] > x; j--)
			arr[j + 1] = arr[j];  	// сдвигаем элемент направо, пока не дошли

		// место найдено, вставить элемент
		arr[j + 1] = x;
	}
}
