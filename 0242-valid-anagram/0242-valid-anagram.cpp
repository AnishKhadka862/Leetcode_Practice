class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        unordered_map < char, int> mymap;
        int i = 0;
        for (char c : s){
            mymap[c]++;
        }
        for (char c : t){
            if (mymap.find(c) != mymap.end()){
                mymap[c]--;
                if (mymap[c] == 0){
                    mymap.erase(c);
                }
            }
            else{
                return false;
            }
        }
        return mymap.empty();
    }
};