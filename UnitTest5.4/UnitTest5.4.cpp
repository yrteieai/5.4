#include "pch.h"
#include "CppUnitTest.h"
#include "../5.4/5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
    TEST_CLASS(UnitTest54)
    {
    public:

        TEST_METHOD(TestS0)
        {
            int K = 2;
            int N = 5;
            double expected = S0(K, N); 
            double actual = S0(K, N);
            Assert::AreEqual(expected, actual, 0.0001, L"TestS0 failed");
        }

        TEST_METHOD(TestS1)
        {
            int K = 2;
            int N = 5;
            double expected = S0(K, N); 
            double actual = S1(K, N, K);
            Assert::AreEqual(expected, actual, 0.0001, L"TestS1 failed");
        }

        TEST_METHOD(TestS2)
        {
            int K = 2;
            int N = 5;
            double expected = S0(K, N);
            double actual = S2(K, N, N);
            Assert::AreEqual(expected, actual, 0.0001, L"TestS2 failed");
        }

        TEST_METHOD(TestS3)
        {
            int K = 2;
            int N = 5;
            double expected = S0(K, N);
            double actual = S3(K, N, K, 1);
            Assert::AreEqual(expected, actual, 0.0001, L"TestS3 failed");
        }

        TEST_METHOD(TestS4)
        {
            int K = 2;
            int N = 5;
            double expected = S0(K, N); 
            double actual = S4(K, N, N, 1);
            Assert::AreEqual(expected, actual, 0.0001, L"TestS4 failed");
        }
    };
}
