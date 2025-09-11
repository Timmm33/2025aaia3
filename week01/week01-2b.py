# week01-2b.py 使用pythen的版本2 使用.find()函式
# LeetCode 28. Find the Index of the First Occurrence in a String
# 在hayhack乾稻草堆裡找到 needle針
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)
