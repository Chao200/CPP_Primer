#include <iostream>
using namespace std;

int main()
{
    double pi = 3.14;
    int p = 1;
    int &ref = p;
    ref = pi;
    cout << ref << endl;
    return 0;
}