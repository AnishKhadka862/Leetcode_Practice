class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map <int, int> mymap;
        for (int i = 0; i < numbers.size(); ++i){
            mymap[numbers[i]] = i;
        }
        for (int j = 0; j < numbers.size(); ++j){
            int comp = target - numbers[j];
            if (mymap.find(comp) != mymap.end()){
                return {j + 1 , mymap[comp] + 1};
            }
        }
        return {};
    }
};