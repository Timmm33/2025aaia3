///week04-3.cpp
/// 1 2 3
///     4 最右邊開始，+1 完成
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size(); ///陣列的大小
        for(int i=N-1; i>=0; i--){ ///倒過來的迴圈
            if(digits[i]==9){ /// 要進位
                digits[i] = 0; /// 設成0繼續做不結束
            } else { /// 不用進位的話，直接++結束
                digits[i]++; /// 簡單+1
                return digits; /// 把全部的陣列當答案
            }
        }
        digits.insert(digits.begin(), 1 ); /// 最左邊要插入1
        return digits; ///結束
    }
};
