/// week08-1.cpp
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {/// ����i
        int ans = 0;
        for(int i=0; i<accounts.size(); i++) {
            int now = 0; /// �j��e�� now=0
            for(int j=0;j<accounts[0].size(); j++) { /// �k��j
                now += accounts[i][j];  ///����[�_��
            }  /// �j��̭� ��snow�}�C ����i �k��j
            /// �j��᭱ ��snow ���ӥ�
            ans = max(ans, now); /// �̦������H�A��s����
        }
        return ans;
    }
};
