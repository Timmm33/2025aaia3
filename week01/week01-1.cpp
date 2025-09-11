/// LeetCode 28. Find the Index of the First Occurrence in a String
///在hayhack乾稻草堆裡找到 needle針
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length();
        for(int i=0; i <= H-N  ; i++){
            /// .subser(開始，長度)部分的字串
            if(haystack.substr(i,N) == needle) return i; /// 找到答案
        }
        return -1; /// 迴圈裡找不到needle就失敗
    }
};
