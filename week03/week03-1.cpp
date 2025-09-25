///week03-1.cpp
#include <iostream> ///c++ cin cout
#include <vector> /// c++ 的陣列 vector
using namespace std;

int main()
{
    vector<int> a(2); /// 有個陣列，裡面有2格(陣列的大小是2格)

    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; ///印出陣列
    cout << endl; ///跳行

    a.push_back(99); ///把 99 推到陣列 a 的更後面
    a.push_back(77); ///把 77 推到陣列 a 的更後面

    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; ///印出陣列
    cout << endl; ///跳行
}
