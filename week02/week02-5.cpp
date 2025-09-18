///week02-5.cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        /// 分類、統計一下26個字母出現幾次 ASCII: 0-255
        int A[256] = {}; /// 陣列宣告，陣列用大括號的預設值0
        for(int i=0; i<s.length(); i++) {
            char c = s[i]; /// 找到第i個字母
            A[c]++; /// 分類、對應的字母桶裡
        }
        for(int i=0; i<t.length();i++){
        char c = t[i]; /// 找到第i 個字母
        A[c]--; ///從桶子哩，拿出字母
        if(A[c] < 0) return c; /// 字母不夠用，就是他!!!
        }
        return 0;
    }
};
