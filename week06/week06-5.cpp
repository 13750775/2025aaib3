/// ���Ѫ� LeetCode �D���D�A���I��
/// LeetCode 3350. Adjacent Increasing Subarrays Detection II
/// �D�ظ�Q�Ѫ� 3349 �ܹ��A�Q�ѵ��A k�A���ѰݧA�̤j�� k
/// �� combo�A����k�A�k�쥪�A�ֿn�h��
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size();  /// �}�C���j�p
        vector<int> left(N, 1);  /// ����k�� combo
        vector<int> right(N, 1); /// �k�쥪�� combo
        for (int i = 1; i < N; i++) {
            if (nums[i-1]<nums[i]) left[i] = left[i-1]+1;
        }
        for (int i = N - 2; i >= 0; i--) {
            if (nums[i]<nums[i+1]) right[i] = right[i+1]+1;
        }
        int ans = 0; /// ���̤j�� k�A�o�̪� k �n�ŦX��Ӭ۾F�}�C������G�n����W�[���̪�����
        for (int i=0; i<N-1; i++) {
            int now = min(left[i],right[i+1]);  /// �{�b�o�楪�k���䪺 combo
            if (now>ans) ans = now;  /// ����j�� k�A�N��s ans
        }
        return ans;
    }
};
