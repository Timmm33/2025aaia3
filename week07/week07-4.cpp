///week07-4.cpp
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions; ///���|��
        cout << instructions;
        int x=0,y=0; /// x�y��, y�y��
        int d = 0; /// d��V:direction 0:�_ 1:�F 2:�n 3:��
        ///�k�� d = (d+1) % 4 ��4���l��
        ///���� d = (d-1+4) % 4 = (d+3) % 4 �i�H�˹L��
        int dx[4] = {0,1,0,-1}; /// �e�i�@��� �|�� x += dx[d]�� y += dy[d]
        int dy[4] = {1,0,-1,0};
        for(char c: instructions) { ///�̦r�������O�A�@���@�Ӱʧ@
            if(c=='G'){ ///�e�i�@��t�X dx[d] dy[d] �e�i
                x += dx[d];
                y += dy[d];
            }else if(c=='R') { /// �k��
                d = (d+1) % 4;
            }else if(c=='L') { /// ����
                d = (d+3) %4;
            }
        }
        cout << 'x' << x << 'y' << y << endl;
        if (x==0 && y==0) return true;
        else return false;
    }
};
