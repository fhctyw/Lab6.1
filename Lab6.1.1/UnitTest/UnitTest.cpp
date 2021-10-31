#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab6.1\Main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 0, 4, -1, -2 };
			int S = SumArray(A, 4);
			Assert::AreEqual(3, S);
		}
	};
}
