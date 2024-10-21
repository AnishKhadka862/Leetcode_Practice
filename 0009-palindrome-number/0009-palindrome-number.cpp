class Solution {
public:
    bool isPalindrome(int x) {
    // converting int to string
    string s = to_string(x);
    int left = 0;
    int right = s.size() - 1;
    while (left < right){
        if (s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
    }
};