class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        int N1 = num1.length(), N2 = num2.length();
        int N = N1 + N2;
        vector<int> ans(N, 0);
        for (int i = N1 - 1; i >= 0; i--) {
            for (int j = N2 - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + ans[i + j + 1];
                ans[i + j + 1] = sum % 10;
                ans[i + j] += sum / 10;
            }
        }
        string strAns = "";
        for (int i = 0; i < N; i++) {
            if (!(strAns.empty() && ans[i] == 0)) {
                strAns += to_string(ans[i]);
            }
        }
        return strAns;
    }
};
