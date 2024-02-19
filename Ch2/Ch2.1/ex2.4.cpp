#include <iostream>
using namespace std;

int main()
{
    cout << "int 可表示数值个数: " << 2 * (0x7fffffff + (long) 1) << endl;

    unsigned u = 10, u2 = 42;
    // 30
    cout << u2 - u << endl;
    // -32 % 4294967296 = 4294967264
    cout << u - u2 << endl;

    int i = 10, i2 = 42;
    // 32
    cout << i2 - i << endl;
    // -32
    cout << i - i2 << endl;
    // (10 + (-10 % 4294967296)) % 4294967296 
    // = (10 + 4294967286) % 4294967296 
    // = 0
    cout << i - u << endl;
    // 0
    cout << u - i << endl;
    return 0;
}