/// week03-4a.cpp
/// LeetCode �ǲ߭p�� 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; /// �ΨӦs��D�s�������}�C
        /// �N�Ҧ��D�s�������J ans �}�C��
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) ans.push_back(nums[i]); /// �p�G���O�s�A�N�[�J ans
        }
        /// ��s��}�C
        for (int i = 0; i < nums.size(); i++) {
            if (i < ans.size()) /// �p�G�٦��D�s����
                nums[i] = ans[i]; /// �� nums ���e�������� ans
            else
                nums[i] = 0; /// �ѤU�������]�� 0
        }
    }
};
