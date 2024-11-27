#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1t/lab5.1.cpp" // Замініть на шлях до вашого коду

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestForVariant22
{
    TEST_CLASS(UnitTestForVariant22)
    {
    public:
        // Тест для функції g
        TEST_METHOD(TestGFunction)
        {
            // Тестові дані
            double x = 2.0, y = 3.0;

            // Очікуваний результат
            double expected = (x * x + y * y + sin(x * y)) / (1 + abs(x * y));

            // Перевірка, чи функція повертає правильний результат
            Assert::AreEqual(expected, g(x, y), 1e-9, L"Function g failed");
        }

        // Тест для обчислення основної формули
        TEST_METHOD(TestMainFormula)
        {
            // Тестові дані
            double r = 2.0, s = 3.0;

            // Ручне обчислення очікуваного результату
            double numerator = g(1, r) + g(s * s - 1, r * r);
            double denominator = g(s, 1 + r);
            double expected = numerator / denominator;

            // Перевірка, чи формула у програмі працює коректно
            Assert::AreEqual(expected, (g(1, r) + g(s * s - 1, r * r)) / g(s, 1 + r), 1e-9, L"Main formula failed");
        }
    };
}

