#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<class T>
void print(vector<T>& vec)
{
    cout << "size: " << vec.size() << 
    ", content: [";

    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it << (it != vec.end() ? "," : "");
    }
    cout << "]\n\n";
}

int main()
{
    vector<int> v1;         // size:0,  no values.
    vector<int> v2(10);     // size:10, value:0
    vector<int> v3(10, 42); // size:10, value:42
    vector<int> v4{ 10 };     // size:1,  value:10
    vector<int> v5{ 10, 42 }; // size:2,  value:10, 42
    vector<string> v6{ 10 };  // size:10, value:""
    vector<string> v7{ 10, "hi" };  // size:10, value:"hi"

    print(v1);
    print(v2);
    print(v3);
    print(v4);
    print(v5);
    print(v6);
    print(v7);
    return 0;
}