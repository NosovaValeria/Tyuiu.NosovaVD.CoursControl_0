#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.CoursControl_0.Task2.V2.Lib/Tyuiu.NosovaVD.CoursControl_0.Task2.V2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V2* service1 = new Service1();
			int a = 2;
			int b = 15;
			int c = 5;
			int d = service1->Rezultat(a, b, c);
			Assert::AreEqual(2, d);
		}
	};
}
