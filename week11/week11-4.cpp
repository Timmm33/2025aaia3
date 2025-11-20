///week11-4.cpp
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1, j = b.length()-1; /// 最右邊的個位數
        vector<int> ans; /// 伸縮自如的陣列，裡面放答案
        int carry = 0;
        while(i>=0 || j>=0) { /// 想要a[i] vs b[j]來進行加法
            int now = carry; /// 現在的這個位數要做加法
            if(i>=0) {
                now += a[i] - '0'; /// 字母a[i]減掉'0'變數值
                i--; /// 倒過來的迴圈 for(int i=N-1; i>=0; i--)
            }
            if(j>=0) {
                now += b[j] - '0';
                j--;
            }
            ans.push_back(now%2); /// 加完後要放答案
            carry = now / 2; /// 看有沒有進位(carry)
        }
        if(carry>0) ans.push_back(carry); /// 結束時，還有進位
        /// 迴圈外面ans 可以拿來用
        string strAns; /// 最後return 的字串
        for(int i=ans.size()-1; i>=0; i--) {
            strAns = strAns + (char)(ans[i]+'0');
        }
        return strAns;
    }
};
