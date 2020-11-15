#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1.1/fdfd.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a;
			const int n = 4;
			int t[n] = { 1,2,3,4 };
			a = Sum(t, n, 0,0);
		}
	};
}
