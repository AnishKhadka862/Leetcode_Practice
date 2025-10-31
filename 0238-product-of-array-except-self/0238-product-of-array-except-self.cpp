/*
nums : [2,3,5] 
1, 2, 6
, , 6


suffix: 1


i = 0, 1, 2, 3
output = [1, 2, 12]
left = 1, 2, 6, 30



i = 2, 
output = [1, 4, 12]
right = 1


*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector <int> product(nums.size(), 1);
        int prefixProduct = 1;
        int suffixProduct = 1;

        for (int i = 0; i < nums.size(); ++i){
            product[i] = product[i] * prefixProduct;
            prefixProduct = prefixProduct * nums[i];
        }

        for (int i = nums.size() - 1; i >= 0; --i){
            product[i] = product[i] * suffixProduct;
            suffixProduct = suffixProduct * nums[i];
        }
            return product;
    }

    
};