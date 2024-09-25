class Solution {
public:
    bool isSubsequence(string s, string t) {

    if (s.size() > t.size()){
        return false;
    }

    int i = 0;
    int j = 0;
    int count = 0;

    while (i < s.size() && j < t.size()){
        if (s[i] == t[j]){
            i++;
            j++;
            
        }
        else
        j++;
    }

    return i == s.size();
    }
    
};