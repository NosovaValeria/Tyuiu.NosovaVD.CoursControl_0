// Tyuiu.NosovaVD.CoursControl_0.Task2.V2.Lib.cpp : Определяет функции для статической библиотеки.
//


#include "pch.h"
#include "framework.h"
#include "../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"
#include <math.h>

// TODO: This is an example of a library function
class Service1 : public ISprint0Task8V2
{
	virtual int Rezultat(int a, int b, int c) override
	{
		int rez = (a + b - c) / (pow(a, 2) + 2);
		return rez;
	}
};