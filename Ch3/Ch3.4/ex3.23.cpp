#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    vector<int> res;
    while (res.size() < 10 && cin >> num)
    {
        res.push_back(num);
    }

    for (auto it = res.begin(); it != res.end(); ++it)
    {
        cout << *it << "-->";
        *it *= 2;
        cout << *it << endl;
    }
    return 0;
}