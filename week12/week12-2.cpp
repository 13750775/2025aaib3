class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0;

        for (int bill : bills) {
            if (bill == 5) {
                d5++;
            } else if (bill == 10) {
                if (d5 > 0) {
                    d5--;
                    d10++;
                } else {
                    return false;
                }
            } else if (bill == 20) {
                if (d10 > 0 && d5 > 0) {
                    d10--;
                    d5--;
                } else if (d5 >= 3) {
                    d5 -= 3;
                } else {
                    return false;
                }
            }
        }
        return true; /
    }
};
