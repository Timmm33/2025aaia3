/// week05-3b.cpp Part1: Input Part2: Output
/// Part 3:stringstream Part4: reverse
/// Part 5: �����Y+���[
#include <iostream>
#include <sstream> /// Part3
#include <algorithm> /// Part4
using namespace std;
int main()
{
    string line; /// �@��۪��r�� Part1:Input
    while(getline(cin ,line) ) { ///Ū�i��
        stringstream ss(line); /// Part3: ��stringstream�q�r
        string word;/// �r��o��
        ss >> word;///�����Y�b�o��
        reverse( word.begin(), word.end() );
        cout << word; /// ���Y�S���Ů�
        while( ss >> word) { ///Part 3: ��ss�q�r
            reverse( word.begin(), word.end() );/// Part 4
            cout << " " << word; /// +���[
            ///cout << "Ū��F" << word << endl; ///Part 3
        }
        cout << endl; ///cout << line << endl; /// Part2: Output
    }
}


