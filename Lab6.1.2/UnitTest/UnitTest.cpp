#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab6.1.2\Main.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[3] = { 4, -2, -3 };
			int t = CountElementArray(A, 3, 0);
			Assert::AreEqual(2, t);
		}
	};
}
