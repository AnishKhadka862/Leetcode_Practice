/*

[5,3,1] -> no profit posible, return 0
[1,3,5] -> 2, 2, return 2
[3, 5, 9, 2, 11] -> 0, 4, 4, 9, return 9

[1,2,4] -> 
size = 3
i : 0
j : 1
maxProfit : 0, 1

*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int i = 0;
    int j = i + 1;
    int maxProfit = 0;
    while ( i < j && j < prices.size()){
        if (prices[j] < prices[i]){
            i = j;
            j = i + 1;
        }
        else{
        maxProfit = max(maxProfit, prices[j] - prices[i]);
        j++;
        }
    }
    return maxProfit;
        
    }
};