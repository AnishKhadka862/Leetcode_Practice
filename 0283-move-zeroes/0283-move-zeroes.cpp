/*
nums -> 12, 3, 5, 1, 0, 0, 2
ans -> 12,3,5,1,2,0,0
i = 4
n = 7
j = 1 < 5 
i + j = nums[5] = 0
nums[i + j] = 0


*/

/*
nums = 2,4,0,5,0,6
pos = 0 -> 1 -> 2 -> 3
i = 0
j = 3
nums -> 2,4,5,6
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] != 0){
                nums[pos] = nums[i];
                pos++;
            }
        }
        for (int j = pos; j < nums.size(); ++j){
            nums[j] = 0;
        }
    }
};