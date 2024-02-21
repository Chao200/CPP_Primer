#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> res;
    string s;
    while (res.size() < 3 && cin >> s)
    {
        res.push_back(s);
    }

    for (auto &str: res)
    {
        for (auto &ch: str)
        {
            ch = toupper(ch);
        }
    }

    for (auto a: res) cout << a << endl;

    return 0;
}