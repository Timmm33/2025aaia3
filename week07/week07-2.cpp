///week07-2.cpp
#include <iostream>
#include <cmath> ///c math 柑Τ sin() cos() abs() sqrt()
using namespace std;
int main()
{
    int n; /// Part1:Input
    cin >> n;

    for(int i=1; i<n*2; i++) { ///Part 2: Output
        for(int j=1; j<n*2; j++){
                /// ㄓぇ 祇瞷タいみ1Τ種
            int d = max(abs(i-n), abs(j-n));
            cout << d + 1; /// cout << n;
        }
        cout << endl; ///"瞷i琌: " << i << endl;
    }
}///2穦Τ3糷加3穦Τ5糷加4穦Τ7糷加5穦Τ7糷加
