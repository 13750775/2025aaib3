/// LeetCode 3349. Adjacent Increasing Subarrays Detection I
/// nums �}�C�A�Ʀr�����W���A�аݦ��S�� 2 �Ӭ۾F�l�}�C�A�̭����O�W���H
/// ex. 2, 5, 7, 8, 9, 2, 3, 4, 3, 1
/// /combo  1 2 3 4 5 1 2 3 4 1
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        /// �ϥΪ��C���`���� combo �s��
        int N = nums.size(); /// �}�C�j�p
        vector<int> combo(N, 1);  /// �� N ��A�̭������Ӫ���1

        for (int i = 1; i < N; i++) {  /// �q i = 1 �}�l�A�ˬd�C�ӼƦr�O�_���W
            if (nums[i - 1] < nums[i]) {
                combo[i] = combo[i - 1] + 1;  /// �p�G�Ʀr���j�A�N���|�A�W�[�A�O����Ӫ���
            }
        }

        /// �ˬd�O�_���۾F2�Ӫ��צܤ֬� k ���l�}�C�Acombo�Ȥ����s�A�ӭӳs��
        for (int i = 0; i < N - k; i++) {
            if (combo[i] >= k && combo[i + k] >= k) return true;  /// �o�̪�����A�T�O����Ӫ��פj�󵥩� k �����W�l�}�C
        }

        return false;  /// �Y�S���ŦX���󪺻��W�l�}�C�A�h��^ false
    }
};
