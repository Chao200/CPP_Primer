#include <iostream>
using namespace std;

int main()
{
    int i = 42;
    int *p;
    int *&r = p;

    r = &i;
    *r = 0;
    return 0;
}