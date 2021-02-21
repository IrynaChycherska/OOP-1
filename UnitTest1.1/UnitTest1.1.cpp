#include "pch.h"
#include "CppUnitTest.h"
#include"../1.1/Time.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time f;		
			Assert::IsTrue(f.GetSecond() == f.GetSecond()  );
		}
	};
}
