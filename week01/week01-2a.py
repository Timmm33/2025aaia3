#week01-2a.py 使用pythen的版本1 使用for 迴圈
#LeetCode 28. Find the Index of the First Occurrence in a String
#在hayhack乾稻草堆裡找到 needle針
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) #字串的長度
        N = len(needle) #字串的長度
        for i in range(H-N+1):#要記得+1
            #切片slicing
            if haystack[ i : i+N ] == needle: #找到我的話
                return i #把位置當答案
        return -1 #沒有找到
