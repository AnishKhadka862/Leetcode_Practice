class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        
        unordered_map<char, char> s_to_t_map;
        unordered_map<char, char> t_to_s_map;
        
        for (int i = 0; i < s.size(); i++) {
            char s_char = s[i];
            char t_char = t[i];
            
            // Check if there is already a mapping from s_char to t_char
            if (s_to_t_map.count(s_char)) {
                if (s_to_t_map[s_char] != t_char) {
                    return false;
                }
            } else {
                s_to_t_map[s_char] = t_char;
            }
            
            // Check if there is already a mapping from t_char to s_char
            if (t_to_s_map.count(t_char)) {
                if (t_to_s_map[t_char] != s_char) {
                    return false;
                }
            } else {
                t_to_s_map[t_char] = s_char;
            }
        }
        
        return true;
    }
};
