///week05-4.cpp
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0; i<s.length(); i++) { ///每一個字母
            s[i] = tolower( s[i] ); /// 變成小寫
        } /// 每個字母都變小寫
        return s; /// 答案送出去
    }
};
