/// week03-4b.cpp
/// LeetCode �ǲ߭p�� 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; /// �ΨӰO���D�s���������J��m
        /// �Ĥ@���G���ʫD�s������}�C�e��
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) nums[k++] = nums[i]; /// �p�G���O�s�A�h�N���m�b k ��m�A�û��W k
        }
        /// �ĤG���G�N�ѤU����m�]���s
        for (int i = k; i < nums.size(); i++) {
            nums[i] = 0; /// �N k ���᪺�����]���s
        }
    }
};
