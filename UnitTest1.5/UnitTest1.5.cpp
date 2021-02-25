#include "pch.h"
#include "CppUnitTest.h"
#include"../1.5/Rectangle.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest15
{
	TEST_CLASS(UnitTest15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangle s;
			Assert::IsTrue(s.s() == s.getA() * s.getB());
		}
	};
}
