class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256]={};//可以用桶子裝字母,大括號代表一開始是空的
        for(int i=0; i<s.length(); i++){
            char c=s[i];
            A[c]++;
        }
        for(int i=0; i<t.length(); i++){
            char c=t[i];
            A[c]--;
            if(A[c]<0) return c;
        }
        return 0;
    }
};
