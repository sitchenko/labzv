#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\sitchenko\source\repos\UnitTest1\lab2zvfor3lab\lab2zvfor3lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(CalculateRightBranch)
        {
            int n = 6;
            int i = 1;
            int a = (n - 1);

            double expected = 30;
            double actual = CalculateYRightBranch(i, a);

            Assert::AreEqual(expected, actual);
        }
    };

    TEST_CLASS(UnitTest2)
    {
    public:
        TEST_METHOD(CalculateLeftBranch)
        {
            int n = 3;
            int j = 1;
            int a = (n - 1);

            double expected = 4.5;
            double actual = CalculateYLeftBranch(j, n);

            Assert::AreEqual(expected, actual);
        }
    };
}