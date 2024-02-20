#include <iostream>
using namespace std;

int main()
{
    int i = 41;
    const int &r1 = i;
    const int &r2 = 42;
    const int &r3 = r1 * 2;

    double val = 3.14;
    const int &ri = val;
    return 0;
}