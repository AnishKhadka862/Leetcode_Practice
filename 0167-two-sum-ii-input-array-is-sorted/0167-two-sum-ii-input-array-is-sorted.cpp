class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        unordered_map <int, int> mymap;
        
        for (int i = 0; i < numbers.size(); ++i){
            int comp = target - numbers[i];
            if (mymap.find(comp) != mymap.end()){
                return { mymap[comp] + 1, i + 1 };
            }
            mymap[numbers[i]] = i;
        }
        return {};
    }
};