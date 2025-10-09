/// week05-3b.cpp Part1: Input Part2: Output
/// Part 3:stringstream Part4: reverse
#include <iostream>
#include <sstream> /// Part3
#include <algorithm> /// Part4
using namespace std;
int main()
{
    string line; /// 一行自的字串 Part1:Input
    while(getline(cin ,line) ) { ///讀進來
        stringstream ss(line); /// Part3: 用stringstream段字
        string word;/// 字放這裡
        while( ss >> word) { ///Part 3: 用ss段字
            reverse( word.begin(), word.end() );/// Part 4
            cout << "讀到了" << word << endl; ///Part 3
        }
        cout << line << endl; /// Part2: Output
    }
}

