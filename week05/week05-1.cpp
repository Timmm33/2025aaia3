/// week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); ///��r���ܦ����e�Ъ� cin iostream
        string word; ///�r�ꪺword
        ///ss >> word;
        ///cout << "Ū��F" << word << "\n";
        while( ss >> word) { ///�@��Ū�i��
            /// �̭��ƻ򳣤���
        }
        return word.length(); ///�̫᪺�r������
    }
};
