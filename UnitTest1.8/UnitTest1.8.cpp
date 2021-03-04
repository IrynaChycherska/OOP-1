#include "pch.h"
#include "CppUnitTest.h"
#include"../1.8/Triangle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest18
{
	TEST_CLASS(UnitTest18)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle::Point z;
			Assert::IsTrue(z.Vidstan() == sqrt(z.GetX() * z.GetX() + z.GetY() * z.GetY()));
		}
	};
}
