#pragma once
#include <iostream>
template <class T>
void insertSort(T arr[], long size)
{
	T x;
	long i, j;

	for (i = 0; i < size; i++) {  // ���� ��������, i - ����� �������
		x = arr[i];

		// ����� ����� �������� � ������� ������������������ 
		for (j = i - 1; j >= 0 && arr[j] > x; j--)
			arr[j + 1] = arr[j];  	// �������� ������� �������, ���� �� �����

		// ����� �������, �������� �������
		arr[j + 1] = x;
	}
}
