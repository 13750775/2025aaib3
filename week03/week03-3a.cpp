/// week03-3a.cpp
/// LeetCode �ǲ߭p�� 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; /// ��l�Ƭ�1�A���W����ơA���G���������
        for (int i = 0; i < nums.size(); i++) {
            ans *= nums[i]; /// �N�}�C���C�Ӥ����ۭ�
        }
        if (ans > 0) return 1;  /// �p�G���G�����A�^��1
        if (ans < 0) return -1; /// �p�G���G���t�A�^��-1
        return 0;               /// �p�G���G���s�A�^��0
    }
};
