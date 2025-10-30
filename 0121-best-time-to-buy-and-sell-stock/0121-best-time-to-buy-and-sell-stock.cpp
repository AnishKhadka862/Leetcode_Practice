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
    int buyPrice = prices[0];
    int maxProfit = 0;

    for (int p : prices){
        if ( p < buyPrice){
            buyPrice = p;
        }
        maxProfit = max(maxProfit, p - buyPrice);
    }
    return maxProfit;
        
    }
};