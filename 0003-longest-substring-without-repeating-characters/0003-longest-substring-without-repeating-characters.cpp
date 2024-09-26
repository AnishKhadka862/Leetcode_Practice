class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        unordered_map <char, int> mymap;

        while (right < s.size()){
            char curr = s[right];
            if (mymap.find(curr) != mymap.end() && left <= mymap[curr]){
                left = mymap[curr] + 1;
            }
            mymap[curr] = right;

            maxlen = (max(maxlen, right - left + 1));
            right++;

        }
        return maxlen;
    }
};