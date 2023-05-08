﻿// lab7C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Task1.h"
using namespace std;

void Task1Char()
{
    int size = 0;
    cout << "Input size: ";
    cin >> size;
    char* arr{ new char[size] };

    cout << "Input array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Input [ " << i + 1 << " ] element: ";
        cin >> arr[i];
    }

    char minElem = minElement(arr, size);
    cout << "Minimum element: " << minElem << endl;
}
void Task1AllType()
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

    double minElem = minElement(arr, size);
    cout << "Minimum element: " << minElem << endl;
}
void MainMenuTask1()
{
    int select = 0;
    do
    {
        cout << '\t' << '\t' << '\t' << "Main menu" << endl;
        cout << "1. Another type " << endl;
        cout << "2. Char " << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            system("cls");
            Task1AllType();
            break;
        case 2:
            system("cls");
            Task1Char();
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}


void MainMenu()
{
    int select = 0;
    do
    {
        cout << '\t' << '\t' << '\t' << "Main menu" << endl;
        cout << "1. Task 1" << endl;
        cout << "2. Task 2" << endl;
        cout << "3. Task 3" << endl;
        cout << "4. Task 4" << endl;
        cout << "0. Exit" << endl;
        cin >> select;
        system("cls");

        switch (select)
        {
        case 1:
            system("cls");
            MainMenuTask1();
            break;
        case 2:
            system("cls");
            break;
        case 3:
            system("cls");
            break;
        case 4:
            system("cls");
            break;
        default:
            system("cls");
            break;
        }
    } while (select != 0);
}

int main()
{
    MainMenu();
}
