///week06-4.cpp
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; ///�@�}�l�b���I
        for(char c : moves) { /// C++�i���j��
            if(c=='U') { /// ���W
                y++;
            }else if(c=='D') { /// ���U
                y--;
            }else if(c=='L') { /// ����
                x--;
            }else if(c=='R') { /// ���k
                x++;
            }
        } /// �̫��٦��d�b���I��?
        if(x==0 && y==0) return true;
        else return false;
    }
};
