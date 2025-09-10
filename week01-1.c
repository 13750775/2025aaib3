///leetcode學習計畫 大海撈針
class Solution {
public:
    int strStr(string haystack, string needle) {
        ///要用迴圈把所以可能的位子都找過一次
        ///ex:sadbutsad 很難過 要找 sad
        ///i=0 sad 把haystack 減前面N個字母
        ///      sad
        int H=haystack.length(), N = needle.length();
        for(int i=0; i<=H - N; i++){
            if( haystack.substr(i, N)==needle) return i;
        }
        return -1;///沒找到答案
    }
};
