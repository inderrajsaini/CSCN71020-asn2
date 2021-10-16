#include "pch.h"
#include "CppUnitTest.h"
extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);
extern "C" int setWidth(int input, int* width);
extern "C" int setLength(int input, int* length);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020asn2UnitTeststests
{
	TEST_CLASS(CSCN71020asn2UnitTeststests)
	{
	public:

		TEST_METHOD(getPerimeter_5and4_18)
		{
			//This test is used to check the value of perimeter of a rectangle
			int l = 5;//Value of length
			int w = 4;//Value of width

			const int EXPECTEDPERIMETER = 18;
			int p;

			p = getPerimeter(&l, &w);//Calling the function

			Assert::AreEqual(EXPECTEDPERIMETER, p);//Checking whether perimeter is coming as expected

		}


		TEST_METHOD(getArea_5and4_20)
		{
			//This test is used to check the value of area of a rectangle
			int l = 5;
			int w = 4;

			const int EXPECTEDAREA = 20;
			int p;

			p = getArea(&l, &w);//Calling the function

			Assert::AreEqual(EXPECTEDAREA, p);//Checking whether area is coming as expected

		}


		TEST_METHOD(setLength_1_1)
		{
			//This test sets 1 to length
			int length;
			int input = 1;

			setLength(input, &length);

			Assert::AreEqual(length, input);//Checking whether length is set equal to input
		}
		TEST_METHOD(setLength_99_99)
		{
			//This test sets 99 to length
			int length;
			int input = 99;

			setLength(input, &length);

			Assert::AreEqual(length, input);//Checking whether length is set equal to input

		}
		TEST_METHOD(setLength_100_notEqual)
		{
			//This test sets 100 to length
			int length;
			int input = 100;

			setLength(input, &length);

			Assert::AreNotEqual(length, input);//Checking whether length is not set equal to input

		}

		TEST_METHOD(setWidth_1_1)
		{
			//This test sets 1 to width
			int width;
			int input = 1;

			setLength(input, &width);

			Assert::AreEqual(width, input);//Checking whether width is set equal to input

		}

		TEST_METHOD(setWidth_99_99)
		{
			//This test sets 99 to width
			int width;
			int input = 99;

			setLength(input, &width);

			Assert::AreEqual(width, input);//Checking whether width is set equal to input

		}

		TEST_METHOD(setWidth_100_notEqual)
		{
			//This test sets 100 to width
			int width;
			int input = 100;

			setLength(input, &width);

			Assert::AreNotEqual(width, input);//Checking whether width is not set equal to input

		}

	};
}
