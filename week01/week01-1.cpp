/// LeetCode 28. Find the Index of the First Occurrence in a String
///�bhayhack���_���̧�� needle�w
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length();
        for(int i=0; i <= H-N  ; i++){
            /// .subser(�}�l�A����)�������r��
            if(haystack.substr(i,N) == needle) return i; /// ��쵪��
        }
        return -1; /// �j��̧䤣��needle�N����
    }
};
