/*
 "James Bond"
 -> "Bond James"
 "Hello   world" 
 -> "world Hello"
*/

class Solution {
public:
    string reverseWords(string s) {
    string result = "";
    int end = s.size() - 1;

    while (end >= 0){
        while (end >= 0 && isspace(s[end])){
            end--;
        }
        string word = "";
        while (end >= 0 && isalnum(s[end])){
            word = s[end] + word;
            end--;
        }

        if (!word.empty()){
            if (!result.empty()){
                result = result + " " + word;
            }
            else
            result = result + word;
        }
    }
    return result;
    }
};