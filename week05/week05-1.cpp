class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        ss >> word;
        while(ss>>word){

        }
        cout<<word;
        return word.length();
    }
};
