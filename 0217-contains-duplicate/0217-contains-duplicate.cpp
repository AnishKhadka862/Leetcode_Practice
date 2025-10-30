class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> mySet;
        for (int n : nums){
            if (mySet.find(n) != mySet.end()){
                return true;
            }
            else{
                mySet.insert(n);
            }
        }
        return false;
        
    }
};