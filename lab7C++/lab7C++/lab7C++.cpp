// lab7C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Task1.h"
using namespace std;

int main()
{
	int size = 0;
	cout << "Input size: ";
	cin >> size;
	double* arr{ new double[size] };

	cout << "Input array:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Input [ " << i + 1 << " ] element: ";
		cin >> arr[i];
	}

	int minElem = minElement(arr, size);
	cout << "Minimum element: " << minElem << endl;
}
