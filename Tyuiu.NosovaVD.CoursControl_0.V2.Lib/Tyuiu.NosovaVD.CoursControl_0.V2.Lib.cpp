// Tyuiu.NosovaVD.CoursControl_0.V2.Lib.cpp : Определяет функции для статической библиотеки.
//


#include "pch.h"
#include "framework.h"
#include "../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"
#include <math.h>

// TODO: This is an example of a library function
class Service : public ISprint0Task8V1
{
	virtual int Chislo(float a, float b) override
	{
		return sqrt((12 * a + pow(a, 4)) / (pow(a, 2) + sqrt(234 + b)));
	}
}; 
