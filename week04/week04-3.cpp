///week04-3.cpp
/// 1 2 3
///     4 �̥k��}�l�A+1 ����
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); ///�}�C���j�p
        for(int i=N-1; i>=0; i--){ ///�˹L�Ӫ��j��
            if(digits[i]==9){ /// �n�i��
                digits[i] = 0; /// �]��0�~�򰵤�����
            } else { /// ���ζi�쪺�ܡA����++����
                digits[i]++; /// ²��+1
                return digits; /// ��������}�C����
            }
        }
        digits.insert(digits.begin(), 1 ); /// �̥���n���J1
        return digits; ///����
    }
};
