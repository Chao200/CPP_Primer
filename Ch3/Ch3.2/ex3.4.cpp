#include <iostream>
using namespace std;

int main()
{
    // // 较大的
    // string s1, s2;
    // cin >> s1;
    // cin >> s2;
    // if (s1 == s2)
    // {
    //     cout << "相等\n";
    // }
    // else
    // {
    //     cout << "较大的为: " << ((s1 > s2) ? s1 : s2) << endl;
    // }


    // 较长的
    string s1, s2;
    cin >> s1;
    cin >> s2;
    if (s1.size() == s2.size())
    {
        cout << "一样长\n";
    }
    else
    {
        cout << "较长的为: " << ((s1.size() > s2.size()) ? s1 : s2) << endl;
    }
    
    return 0;
}