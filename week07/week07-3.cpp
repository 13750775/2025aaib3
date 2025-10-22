class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for (string op : operations) {
            cout << "現在讀到了: " << op << "\n";  /// Debugging print statement
            if (op[0] == 'C') {
                a.pop_back();  /// Remove the last score
            } else if (op[0] == 'D') {
                a.push_back(a.back() * 2);  /// Double the last score and add it to the list
            } else if (op[0] == '+') {
                /// Add the sum of the last two scores
                a.push_back(a[a.size() - 1] + a[a.size() - 2]);
            } else {
                /// Convert the score to an integer and add it to the list
                a.push_back(stoi(op));
            }
        }
        /// Output all scores (for debugging purposes)
        for (int now : a) {
            cout << now << " ";
        }
        /// Return the sum of all scores
        int total = 0;
        for (int score : a) {
            total += score;
        }
        return total;
    }
};
