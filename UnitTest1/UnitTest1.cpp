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
			int t[3][3] = { {1, -2, 3}, {-3, -4, 1}, {6, -2, 9} };
			int S = S;
			Assert::AreEqual(S, 9);
		}
	};
}
