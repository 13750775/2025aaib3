///leetcode�ǲ߭p�e �j�����w
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///�n�ΰj���ҥH�i�઺��l����L�@��
        ///ex:sadbutsad �����L �n�� sad
        ///i=0 sad ��haystack ��e��N�Ӧr��
        ///      sad
        int H=haystack.length(), N = needle.length();
        for(int i=0; i<=H - N; i++){
            if( haystack.substr(i, N)==needle) return i;
        }
        return -1;///�S��쵪��
    }
};
