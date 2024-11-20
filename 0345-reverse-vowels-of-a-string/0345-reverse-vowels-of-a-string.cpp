class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int start = 0, end = s.size() - 1;

        while (start < end) {
            // Find the next vowel from the left
            while (start < end && vowels.count(s[start]) == 0) {
                start++;
            }
            // Find the next vowel from the right
            while (start < end && vowels.count(s[end]) == 0) {
                end--;
            }

            // Swap the vowels
            if (start < end) {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }

        return s;
    }
};
