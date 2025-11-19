class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet;
        for(int num : nums)numsSet.insert(num);
        while(numsSet.find(original)!=numsSet.end()){
            original=original*2;
        }
        return original;

    }
};
