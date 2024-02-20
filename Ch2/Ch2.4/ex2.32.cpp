/*
非法，整型变量无法赋值给指针
*/

#include <iostream>
using namespace std;

int main()
{
    constexpr int null = 0;
    int *p = 0;
    return 0;
}