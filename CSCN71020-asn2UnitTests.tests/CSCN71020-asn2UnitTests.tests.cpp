#include "pch.h"
#include "CppUnitTest.h"
extern "C" int getPerimeter(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020asn2UnitTeststests
{
	TEST_CLASS(CSCN71020asn2UnitTeststests)
	{
	public:
		
		TEST_METHOD(findPerimeter001)
		{
			//This test is used to check the value of perimeter of a rectangle
			int l = 5;//Value of length
			int w = 4;//Value of width

			const int EXPECTEDPERIMETER = 18;
			int p;

			p = getPerimeter(&l, &w);

			Assert::AreEqual(EXPECTEDPERIMETER, p);

		}
	};
}