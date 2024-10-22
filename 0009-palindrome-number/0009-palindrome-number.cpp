// class Solution {
// public:
//     bool isPalindrome(int x) {
//     // converting int to string
//     string s = to_string(x);
//     int left = 0;
//     int right = s.size() - 1;
//     while (left < right){
//         if (s[left] != s[right]){
//             return false;
//         }
//         left++;
//         right--;
//     }
//     return true;
//     }
// };

// without converting int to string

class Solution {
public:
    bool isPalindrome(int x) {

    if (x < 0 || x % 10 == 0 && x != 0){
        return false;
    }

    int reversedHalf = 0;
    while (x > reversedHalf){
        reversedHalf = reversedHalf * 10 + (x % 10);
        x /= 10;
    }
    return x == reversedHalf || x == reversedHalf / 10;

    }
};