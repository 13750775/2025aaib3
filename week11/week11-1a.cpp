class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(1){
            int found=0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]==original) found=1;
            }
            if(found==0) break;
            else original=original*2;
        }
        return original;
    }
};
