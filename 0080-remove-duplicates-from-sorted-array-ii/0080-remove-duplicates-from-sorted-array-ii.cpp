class Solution {
public:
    //elements in array can occur most twice
    // for eg: [2,3,3,3,4,5,5,5,5] -> [2,3,3,4,5,5,___]
    int removeDuplicates(vector<int>& nums) {
    if (nums.size() < 3) return nums.size();
    
    // j is the index to place the next valid element
    int j = 2;
    
    // Start iterating from the third element since the first two can always stay
    for (int i = 2; i < nums.size(); ++i) {
        // Only add nums[i] if it's different from nums[j-2]
        if (nums[i] != nums[j-2]) {
            nums[j] = nums[i];
            j++;
        }
    }
    
    return j; // 'j' represents the length of the modified array
}
};