// nums = [1,2,3,1], k = 3
// nums[i] == nums[j] && abs(i - j) <= k, true


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int, int> mymap;
        for (int i = 0; i < nums.size(); ++i){
            if (mymap.count(nums[i])){
                if (abs(mymap[nums[i]] - i) <= k){
                    return true;
                }
            }
            mymap[nums[i]] = i;
        }
        return false;
    }
};