class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int count = 0;

        while (i >= 0 && isspace(s[i])) {
            i -= 1;
        }

        while (i >= 0 && !isspace(s[i])) {
            count++;
            i -= 1;
        }

        return count;
    }
};
