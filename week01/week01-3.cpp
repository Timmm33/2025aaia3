///week01-3.cpp
# include <iostream> /// �ϥ�c++���~�� �t�d��JInput ��XOutput
using namespace std; /// �ϥ� C++ �� Std ���y�R�W�Ŷ��z

int main()
{
    int n;
    cin >> n; /// �ϥ�C++�� console Input ��J��r���
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans += i*i;
    }
    cout << ans; /// �ϥ�C++��Console Output ��X��r���
}
