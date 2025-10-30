/// week08-1.cpp
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {/// 左手i
        int ans = 0;
        for(int i=0; i<accounts.size(); i++) {
            int now = 0; /// 迴圈前面 now=0
            for(int j=0;j<accounts[0].size(); j++) { /// 右手j
                now += accounts[i][j];  ///把錢加起來
            }  /// 迴圈裡面 更新now陣列 左手i 右手j
            /// 迴圈後面 更新now 拿來用
            ans = max(ans, now); /// 最有錢的人，更新答案
        }
        return ans;
    }
};
