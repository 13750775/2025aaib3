/// LeetCode �ǲ߭p�e��4�D 242. Valid Anagram
/// ���A��Ӧr�� s, t �ЧP�_���̥Ϊ��r���A�O�_���ۦP(�i������)
class Solution {
public:
    bool isAnagram(string s, string t) {
        /// ���ݬݦr�ꪺ���׬O�_�ۦP�C
        if ( s.length() != t.length() ) return false;  /// ���P�A�N��������

        /// ����r��s���r���A�ֿn�@�U
        int R[26] = {}; /// �n���@�� Recycle �^����A�Ӥ����ڭ̪��r��
        for (int i=0; i<s.length(); i++) {
            char c = s[i] - 'a'; /// ���ӬO�p�g�r���A���n�ܦ�0-25�ҥH�n��h'a'
            R[c]++;  /// �ֿn��
        }

        /// �A��r��t���r���A�A�ݬݭ��ǥX�{�A��n�Χ�(����ζW�L)
        for (int i=0; i<t.length(); i++) {
            char c = t[i] - 'a';
            R[c]--;  /// �α���
            if (R[c] < 0) return false;  /// �����ΡA�N����
        }

        return true;
    }
};
