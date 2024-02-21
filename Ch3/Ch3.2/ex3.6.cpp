#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s << endl;
    for (auto& x: s)
    {
        x = 'X';
    }
    cout << s << endl;
    return 0;
}