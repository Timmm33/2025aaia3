///week03-4.cpp
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        ///triangle[i][j]
        int N = triangle.size(); ///�`�@���X�h
        ///�q�W���U�d�A�̤U������N-1���A�S���D�A�N�O�������̤p�� �ҥHN-2���W��s
        for(int i=N-2; i>=0; i--){ ///�˹L�Ӫ��j��A�qN-2���W
            for(int j=0; j<=i; j++){ /// �q����k
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};
