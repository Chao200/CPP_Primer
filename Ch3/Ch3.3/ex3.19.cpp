#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> res0{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    vector<int> res1(10, 42);

    vector<int> res2;
    while (res2.size() < 10)
    {
        res2.push_back(42);
    }

    return 0;
}