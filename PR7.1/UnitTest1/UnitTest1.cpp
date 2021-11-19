#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\PR7.1\PR7.1\PR7.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 0, S = 0;
			int** t = new int* [3];
			t[0] = new int[3]{ 1,-2, 3 };
			t[1] = new int[3]{ -4, 5, -6 };
			t[2] = new int[3]{ 7, -8, 9};
			Calc(t, 3, 3, S, k);
			Assert::AreEqual(2, k);
		}
	};
}
