#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    {
        int a = 2;
        cout << a << endl;
    }
    cout << a << endl;
    return 0;
}