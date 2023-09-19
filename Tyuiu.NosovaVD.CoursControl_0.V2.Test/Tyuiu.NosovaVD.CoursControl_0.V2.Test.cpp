#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.NosovaVD.CoursControl_0.V2.Lib/Tyuiu.NosovaVD.CoursControl_0.V2.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V1* service = new Service();
			float a = 2;
			float b = 22;
			int c = service->Chislo(a, b);
			Assert::AreEqual(1, c);
		}
	}; 
}