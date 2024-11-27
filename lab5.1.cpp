#include <iostream>
#include <cmath>
using namespace std;

// �������� ������� g
double g(const double x, const double y);

int main()
{
    double r, s;
    cout << "r = "; cin >> r;
    cout << "s = "; cin >> s;

    // ���������� �������
    double result = (g(1, r) + g(s * s - 1, r * r)) / g(s, 1 + r);
    cout << "Result = " << result << endl;

    return 0;
}

// ���������� ������� g
double g(const double x, const double y)
{
    return (x * x + y * y + sin(x * y)) / (1 + abs(x * y));
}
