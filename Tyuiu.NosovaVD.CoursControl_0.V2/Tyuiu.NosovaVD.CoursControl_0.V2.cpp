﻿// Tyuiu.NosovaVD.CoursControl_0.V2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include "../Tyuiu.NosovaVD.CoursControl_0.V2.Lib/Tyuiu.NosovaVD.CoursControl_0.V2.Lib.cpp"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    ISprint0Task8V1* service = new Service();
    float a, b;
    cout << "Nosova Valeria\n";
    cout << "Вариант 2. Задача 1\n";
    cout << "Введите x: ";
    cin >> a;
    cout << "\nВведите z: ";
    cin >> b;
    cout << "\nРезультат значения заданной функции равен " << service->Chislo(a, b) << endl;
}  
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
