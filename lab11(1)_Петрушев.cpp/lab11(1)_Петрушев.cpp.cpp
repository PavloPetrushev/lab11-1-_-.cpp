// lab11(1)_Петрушев.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;

int main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b; 

    cout << "Введіть значення змінної a: ";
    cin >> a;
    cout << "Введіть значення змінної b: ";
    cin >> b;

    double* ptrA = &a;
    double* ptrB = &b;

    cout << "Початкове значення:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    *ptrA = *ptrA * 2; 
    *ptrB = *ptrB / 2; 

    cout << "Змінені значення:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}