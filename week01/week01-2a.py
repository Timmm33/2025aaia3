#week01-2a.py �ϥ�pythen������1 �ϥ�for �j��
#LeetCode 28. Find the Index of the First Occurrence in a String
#�bhayhack���_���̧�� needle�w
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack) #�r�ꪺ����
        N = len(needle) #�r�ꪺ����
        for i in range(H-N+1):#�n�O�o+1
            #����slicing
            if haystack[ i : i+N ] == needle: #���ڪ���
                return i #���m����
        return -1 #�S�����
