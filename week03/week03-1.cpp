///week03-1.cpp
#include <iostream> ///c++ cin cout
#include <vector> /// c++ ���}�C vector
using namespace std;

int main()
{
    vector<int> a(2); /// ���Ӱ}�C�A�̭���2��(�}�C���j�p�O2��)

    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; ///�L�X�}�C
    cout << endl; ///����

    a.push_back(99); ///�� 99 ����}�C a ����᭱
    a.push_back(77); ///�� 77 ����}�C a ����᭱

    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; ///�L�X�}�C
    cout << endl; ///����
}
