#include "pch.h"
#include "CppUnitTest.h"
#include "../5.3/5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a=g(0);
			Assert :: AreEqual(a, 1.);
		}
	};
}
