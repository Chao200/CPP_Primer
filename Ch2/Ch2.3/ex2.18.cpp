#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2;
    int *pa = &a;
    int *pb = &b;

    cout << "pa: " << pa << endl;
    cout << "*pa: " << *pa << endl;
    cout << "---" << endl;

    pa = pb;
    cout << "pa: " << pa << endl;
    cout << "*pa: " << *pa << endl;
    cout << "---" << endl;
    
    *pa = 3;
    cout << "pa: " << pa << endl;
    cout << "*pa: " << *pa << endl;

    return 0;
}