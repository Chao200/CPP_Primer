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

    for (int i = 0; i < res.size() - 1; ++i)
    {
        cout << res[i] + res[i+1] << endl;
    }

    cout << "-----------------" << endl;

    int left = 0, right = res.size() - 1;
    while (left < right)
    {
        cout << res[left] + res[right] << endl;
        ++left;
        --right;
    }
    
    return 0;
}