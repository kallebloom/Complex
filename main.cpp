#include <iostream>
#include "fractions.hpp"

using namespace std;

void complex_testing();

int main()
{
    complex_testing();
    return 0;
}


void complex_testing()
{
    Complex a(1, 2), b(3, 4);
    cout << "TEST 1:" << endl;
    cout << "Operation == :"
         << (a == a && !(a == b) ? "OK": "Failed") << endl;
    cout << "Operation + :"
         << (a + b == Complex(4, 6) ? "OK": "Failed") << endl;
    cout << "Operation - :"
         << (a - b == Complex(-2, -2) ? "OK": "Failed") << endl;
    cout << "Operation * :"
         << (a * b == Complex(-5, 10) ? "OK": "Failed") << endl;
    cout << "Operation / :"
         << (a / b == Complex(0.44, 0.08) ? "OK": "Failed") << endl;
    cout << "Operation conjugate() :"
         << (a.conjugate() == Complex(1, -2) ? "OK": "Failed") << endl;
    cout << "Operation im :"
         << (a.im == 2.0 ? "OK": "Failed") << endl;
    cout << "Operation re :"
         << (a.re == 1.0 ? "OK": "Failed") << endl;
    cout << "Operation abc :"
         << (abs(b) == 5.0 ? "OK": "Failed") << endl;
}