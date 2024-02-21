#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> v1;         // size:0,  no values.
    cout << "\n=========v1=========\n";
    cout << v1.size() << endl;
    for (auto v: v1) cout << v << endl;

    vector<int> v2(10);     // size:10, value:0
    cout << "\n=========v2=========\n";
    cout << v2.size() << endl;
    for (auto v: v2) cout << v << endl;

    vector<int> v3(10, 42); // size:10, value:42
    cout << "\n=========v3=========\n";
    cout << v3.size() << endl;
    for (auto v: v3) cout << v << endl;

    vector<int> v4{ 10 };     // size:1,  value:10
    cout << "\n=========v4=========\n";
    cout << v4.size() << endl;
    for (auto v: v4) cout << v << endl;

    vector<int> v5{ 10, 42 }; // size:2,  value:10, 42
    cout << "\n=========v5=========\n";
    cout << v5.size() << endl;
    for (auto v: v5) cout << v << endl;

    vector<string> v6{ 10 };  // size:10, value:""
    cout << "\n=========v6=========\n";
    cout << v6.size() << endl;
    for (auto v: v6) cout << v << endl;

    vector<string> v7{ 10, "hi" };  // size:10, value:"hi"
    cout << "\n=========v7=========\n";
    cout << v7.size() << endl;
    for (auto v: v4) cout << v << endl;

    return 0;
}