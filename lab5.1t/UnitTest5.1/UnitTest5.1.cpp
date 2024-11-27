#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1t/lab5.1.cpp" // ������ �� ���� �� ������ ����

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForVariant22
{
    TEST_CLASS(UnitTestForVariant22)
    {
    public:
        // ���� ��� ������� g
        TEST_METHOD(TestGFunction)
        {
            // ������ ���
            double x = 2.0, y = 3.0;

            // ���������� ���������
            double expected = (x * x + y * y + sin(x * y)) / (1 + abs(x * y));

            // ��������, �� ������� ������� ���������� ���������
            Assert::AreEqual(expected, g(x, y), 1e-9, L"Function g failed");
        }

        // ���� ��� ���������� ������� �������
        TEST_METHOD(TestMainFormula)
        {
            // ������ ���
            double r = 2.0, s = 3.0;

            // ����� ���������� ����������� ����������
            double numerator = g(1, r) + g(s * s - 1, r * r);
            double denominator = g(s, 1 + r);
            double expected = numerator / denominator;

            // ��������, �� ������� � ������� ������ ��������
            Assert::AreEqual(expected, (g(1, r) + g(s * s - 1, r * r)) / g(s, 1 + r), 1e-9, L"Main formula failed");
        }
    };
}

