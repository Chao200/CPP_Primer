#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    // 顶层 const
    int *const p1 = &i;
    // 顶层 const
    const int ci = 42;
    // 底层 const
    const int *p2 = &ci;
    // 顶层 + 底层
    const int* const p3 = p2;
    // 引用本身是顶层，但前面的 const 是底层 const
    const int &r = ci;

    // 合法，拷贝可以忽略顶层 const
    i = ci;
    // 都具有底层 const
    p2 = p3;

    // // 不合法，p 不具有底层 const
    // int *p = p3;

    // 合法，i 是非常量，可以转为常量
    p2 = &i;

    // // 不合法，可以通过 r 修改常量 ci
    // int &r = ci;

    // 合法，非常量，可以转为常量
    const int &r2 = i;
    return 0;
}