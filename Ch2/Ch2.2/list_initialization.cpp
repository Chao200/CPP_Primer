#include <iostream>
using namespace std;

int main()
{
    long double ld = 3.1415;
    // 报错
    int a{ld}, b = {ld};
    // 不报错
    int c(ld), d = ld;
    return 0;
}