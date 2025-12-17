class Solution {
public:
    double myPow(double x,long long int n) {
        // 璽计薄猵
        if (n < 0) return myPow(1 / x, -n);
        // 计0薄猵
        if (n == 0) return 1;
        // 秈︽е硉经笲衡
        double half = myPow(x, n / 2);  // р计ち
        // 狦琌案计Ωよ钡 half * half
        if (n % 2 == 0) return half * half;
        // 狦琌计Ωよ临璶 x
        else return half * half * x;
    }
};
