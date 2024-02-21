#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> res;
    
    int num;
    while (res.size() < 10 && cin >> num)
    {
        res.push_back(num);
    }

    for (auto it = res.begin(); it != res.end() - 1; ++it)
    {
        cout << *it + *(it+1) << endl;
    }

    cout << "-----------------" << endl;

    auto left = res.begin(), right = res.end() - 1;
    while (left < right)
    {
        cout << *left + *right << endl;
        ++left;
        --right;
    }
    
    return 0;
}