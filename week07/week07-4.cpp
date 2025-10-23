///week07-4.cpp
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions; ///走四次
        cout << instructions;
        int x=0,y=0; /// x座標, y座標
        int d = 0; /// d方向:direction 0:北 1:東 2:南 3:西
        ///右轉 d = (d+1) % 4 取4的餘數
        ///左轉 d = (d-1+4) % 4 = (d+3) % 4 可以倒過來
        int dx[4] = {0,1,0,-1}; /// 前進一格時 會走 x += dx[d]及 y += dy[d]
        int dy[4] = {1,0,-1,0};
        for(char c: instructions) { ///依字母的指令，一次一個動作
            if(c=='G'){ ///前進一格配合 dx[d] dy[d] 前進
                x += dx[d];
                y += dy[d];
            }else if(c=='R') { /// 右轉
                d = (d+1) % 4;
            }else if(c=='L') { /// 左轉
                d = (d+3) %4;
            }
        }
        cout << 'x' << x << 'y' << y << endl;
        if (x==0 && y==0) return true;
        else return false;
    }
};
