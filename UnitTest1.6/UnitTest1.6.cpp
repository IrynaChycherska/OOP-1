#include "pch.h"
#include "CppUnitTest.h"
#include"../1.6/Rectangle.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
	TEST_CLASS(UnitTest16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rectangle s;
			Assert::IsTrue(s.s() == s.getA() * s.getB());
		}
	};
}
