///week03-4.cpp
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        ///triangle[i][j]
        int N = triangle.size(); ///總共有幾層
        ///從上往下查，最下面的第N-1曾，沒問題，就是本身的最小值 所以N-2往上更新
        for(int i=N-2; i>=0; i--){ ///倒過來的迴圈，從N-2往上
            for(int j=0; j<=i; j++){ /// 從左到右
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};
