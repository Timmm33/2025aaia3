/// week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); ///把字串變成之前教的 cin iostream
        string word; ///字串的word
        ///ss >> word;
        ///cout << "讀到了" << word << "\n";
        while( ss >> word) { ///一直讀進來
            /// 裡面甚麼都不做
        }
        return word.length(); ///最後的字的長度
    }
};
