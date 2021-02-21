#include "pch.h"
#include "CppUnitTest.h"
#include"../1.3/Point.h"
#include<cmath>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My13oop
{
	TEST_CLASS(My13oop)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point c;
			Assert::IsTrue(c.Vidstan() == sqrt(c.GetX()*c.GetX()+c.GetY()*c.GetY()));
		}
	};
}
