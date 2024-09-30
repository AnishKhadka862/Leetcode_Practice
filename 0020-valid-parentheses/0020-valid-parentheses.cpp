class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack; 

        // If the length of the string is odd, it cannot be balanced
        if (s.size() % 2 != 0){
            return false;
        }

        for (char c: s){
            // Push opening brackets to the stack
            if (c == '(' || c == '{' || c == '['){
                mystack.push(c);
            }
            else {
                // If stack is empty when a closing bracket is found, return false
                if (mystack.empty()) {
                    return false;
                }
                
                // Check if the top of the stack matches the closing bracket
                if ((c == ')' && mystack.top() == '(') ||
                    (c == '}' && mystack.top() == '{') ||
                    (c == ']' && mystack.top() == '[')) {
                    mystack.pop(); // Valid pair, pop the top of the stack
                } else {
                    return false; // Mismatched bracket
                }
            }
        }

        // If the stack is empty, all brackets were matched correctly
        return mystack.empty();
    }
};
