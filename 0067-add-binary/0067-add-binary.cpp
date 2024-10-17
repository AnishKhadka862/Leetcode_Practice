class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string result = "";
        
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0'; // Add the current digit of 'a'
            if (j >= 0) sum += b[j--] - '0'; // Add the current digit of 'b'
            
            result += (sum % 2) + '0';       // Add current binary digit to result
            carry = sum / 2;                 // Update the carry
        }
        
        reverse(result.begin(), result.end()); // Reverse the result
        return result;
    }
};
