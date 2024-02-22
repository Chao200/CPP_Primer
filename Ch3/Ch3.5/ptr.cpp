#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr + 4;
    int *p2 = arr + 5;
    int *p3 = arr + 61;
    cout << p << ", " << p2 << ", " << p3 << endl;
    return 0;
}