#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int j = 1;
    const int ci = i;
    auto e = &ci;
    e = &j;
    auto const d = &ci;
    d = &j;
    const auto c = &ci;
    c = &j;
    return 0;
}