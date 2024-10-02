class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        unordered_map <char, int> mymap;
        mymap = {{'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};
        for (int i = 0 ; i < s.size(); ++i){
            if (mymap.find(s[i]) != mymap.end()){
                if (mymap[s[i]] < mymap[s[i+1]]){
                    result -= mymap[s[i]];
                }
                else{
                result += mymap[s[i]];
                }
            }
        }
        return result;
    }
};




/*
{{I:1}, {V:5}, {X:10}, {L:50}, {C:100}, {D:500}, {M:1000}};

input "III"
output -> 3 ( 1 + 1 + 1)
*/