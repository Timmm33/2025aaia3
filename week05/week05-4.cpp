///week05-4.cpp
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++) { ///�C�@�Ӧr��
            s[i] = tolower( s[i] ); /// �ܦ��p�g
        } /// �C�Ӧr�����ܤp�g
        return s; /// ���װe�X�h
    }
};
