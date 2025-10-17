// [3, 5, 8, 6, 4] , target = 10
// since, 3 and 4 adds up to 10
// should return indices 3 and 4 -> [3, 4]
//target = 10
//mymap -> {3,0}
//diff -> 7



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> mymap;
        for (int i = 0; i < nums.size(); ++i){
            int diff = target - nums[i]; // 7
            if (mymap.find(diff) != mymap.end()){
                return {i, mymap[diff]};
            }
            else{
                mymap[nums[i]] = i;
            }

        }
        return {};
    }
};